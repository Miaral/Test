#include<iostream>

using namespace std;

int main()
{
    int a,b,r;
    int gcd;
    cout<<"输入俩个数"<<endl;

    cin>>a>>b;
    if(a <= 0 || b <= 0)
    {
        cout<<"输入的数据有误，程序终止！！！"<<endl;
        return 1;
    }
    cout<<a<<"和"<<b<<"的最大公约数为：";
    
    while(b!=0)    
    {
        r=a%b;a=b;b=r;
    }
    gcd = a;
    cout<<gcd<<endl;
    return 0;   

}