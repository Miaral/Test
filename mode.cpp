#include <iostream>
using namespace std;
/* 变量x、y为Swap函数的形式参数 */
void Swap(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout<<"x= "<<x<<"y= "<<y<<endl;
    // printf("x = %d, y = %d\n", x, y);
}
int main()
{
    int a=10;
    int b=20;
     /*变量a、b为Swap函数的实际参数*/
    Swap(a, b);
    cout<<"a= "<<a<<"b= "<<b<<endl;
    return 0;
}