#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a = "2";
    int b = 1;
    string end = "";
    end = to_string(b) + a;
    cout << end;
    return 0;
}
