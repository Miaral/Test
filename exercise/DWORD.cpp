#include <iostream>
// #include <iomanip>
#include<iomanip>
#include"windows.h"
using namespace std;

int main()
{
    //DWORD_PTR和DWORD都储存一个地址指针
    int a = 200;
    DWORD_PTR ptr = (DWORD_PTR)&a;
    DWORD dw = (DWORD)&a;
    cout.setf(ios_base::uppercase);
    cout << &a << endl;
    cout << setw(8) << setfill('0') << uppercase << hex << ptr << endl;
    cout << setw(8) << setfill('0') << uppercase << hex << dw << endl;
    cout << nouppercase << dec;
    cout << "a = " << *(int *)ptr << endl;
    cout << "a = " << *(int *)dw << endl;
    //DWORD_PTR和DWORD都储存一个整型
    int b = 100;
    DWORD_PTR ptrb = b;
    DWORD dwb = b;
    cout << "b = " << ptrb << endl;
    cout << "b = " << dwb << endl;
    getchar();
    return 0;
}