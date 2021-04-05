#include <iostream>
using namespace std;

void foo1();
void foo2();

int main()
{
    atexit(foo1);
    atexit(foo2);
    cout << "main exit.." << endl;
    exit(0);
    return 0;
}
void foo1()
{
    cout << "calling foo1().." << endl;
}
void foo2()
{
    cout << "calling foo2().." << endl;
}