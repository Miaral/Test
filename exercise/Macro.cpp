#include <iostream>

using namespace std;

#define STR(S) #S

#define CONS(a, b) (int)(a##e##b)
int main()
{
    cout << STR(vcl) << endl;
    cout << CONS(2, 3) << endl;
    return 0;
}