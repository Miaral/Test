#include<iostream>
#include<string.h>
using namespace std;
#define MaxSize 20
//字符串栈
class Stack
{
    char *data;
    int top;
public:
    Stack();
    ~Stack();
    bool IsEmpty();
    bool Push(char e);
    bool Pop(char& e);
};

Stack::Stack()
{
    data = new char[MaxSize];
    top = -1;
}

Stack::~Stack()
{
    delete [] data;
}

bool Stack::IsEmpty()
{
    return (top == -1);
}

bool Stack::Push(char e)
{
    if(top == MaxSize-1)    return false;   //栈满
    top++;
    data[top] = e;
    return true;
}

bool Stack::Pop(char& e)
{
    if(top == -1)   return false;   //栈空
    e = data[top];
    top--;
    return true;
}

bool IsMatch(char str[],int n)
{
    int i=0;
    char e;
    Stack st;   //建立顺序栈
    while(i<n)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            st.Push(str[i]);
        else
        {
            if(str[i] == ')')
            {
                if(!st.Pop(e))  return false;
                if(e!='(')  return false;
            }
            if(str[i] == ']')
            {
                if(!st.Pop(e))  return false;
                if(e!='[')  return false;
            }
            if(str[i] == '}')
            {
                if(!st.Pop(e))  return false;
                if(e!='{')  return false;
            }
        }
        i++;
    }
    if(st.IsEmpty())    return true;    
    else return false;  //遍历字符串后栈不为空说明有不匹配字符
}

int main()
{
    cout<<"请输入表达式："<<endl;
    char str[MaxSize];
    cin>>str;
    int n = strlen(str);
    if(IsMatch(str,n))
        cout<<"表达式"<<str<<"中的括号是匹配的"<<endl;
    else
        cout<<"表达式"<<str<<"中的括号是不匹配的"<<endl;
}