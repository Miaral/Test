#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

map<map<int ,int > ,int >mymap;

int main()
{
    map<int ,int >tmp;

    tmp.insert(make_pair(2,3));
    tmp.insert(make_pair(3,2));
    mymap[tmp]=2;

    tmp.clear();
    tmp.insert(make_pair(2,3));
    printf("%s\n",mymap.count(tmp) ? "YES":"NO");///输出"NO"
    printf("%s\n",mymap.find(tmp) != mymap.end() ? "YES":"NO");///输出"NO"
    tmp.insert(make_pair(3,2));
    printf("%s\n",mymap.count(tmp) ? "YES":"NO");///输出"YES"
    printf("%s\n",mymap.find(tmp) != mymap.end() ? "YES":"NO");///输出"YES"
    return 0;
}