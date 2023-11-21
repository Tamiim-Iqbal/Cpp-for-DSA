#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="World";
    a=a+b;    //a.append(b);˜
    cout<<a<<endl;
    cout<<b<<endl;
    b.push_back('A');     //b=b+"A";
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;
    return 0;
}