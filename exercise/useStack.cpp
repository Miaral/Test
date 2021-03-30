#include<iostream>
#include<stack>
#include<string>

using namespace std;

#define bTrue  1
#define bFalse 0

bool IsBracketValid(const string & str)
{
    stack<unsigned char> stackBucket; // define a stack
    unsigned char chTop = ' ';  // store stack top value

    for (auto & ch : str) // traverse input string
    {
        if (stackBucket.empty() && ch == ')') // when stack empty and the next char is ')', the string bracket isn't valid!
        {
            return bFalse;
        }
        else //another case
        {
            if (!stackBucket.empty()) // stack top value must be exist.
            {
                chTop = stackBucket.top();
                if (chTop != '(') // stack must store '('
                {
                    return bFalse;
                }
            }

            if (chTop == '(' && ch == ')') // compare the char with stack top value
            {
                stackBucket.pop();
                chTop = ' '; // clear chTop, not save pre value.
            }
            else
            {
                stackBucket.push(ch);
            }
        }
    }

    if (stackBucket.empty()) // empty stack mean bracket is valid
    {
        return bTrue;
    }
    else
    {
        return bFalse;
    }
}

int main(int argc, char **argv)
{
    string input;

    while (getline(cin, input))
    {
        if (IsBracketValid(input))
        {
            printf("bracket is valid!\n");
        }
        else
        {
            printf("bracket isn't valid!\n");
        }
    }

    return 0;
}