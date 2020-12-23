#include<iostream>
using namespace std;

// 值传递
void change1(int n)
{
    cout<<"值传递--函数操作地址"<<&n<<endl;
    n++;
}

// 引用传递
void change2(int &n)
{
    cout<<"值传递--函数操作地址"<<&n<<endl;
    n++;
}

// 指针传递
void change3(int *n)
{
    cout<<"值传递--函数操作地址"<< n<<endl;
    *n+=1;
}
int main()
{
    int a=10;
    cout<<"实参的地址"<<&a<<endl;

    change1(a);
    cout<<"after change1() a="<<a<<endl;

    change2(a);
    cout<<"after change2() a="<<a<<endl;

    change3(&a);
    cout<<"after change3() a="<<a<<endl;

    return 0;
}