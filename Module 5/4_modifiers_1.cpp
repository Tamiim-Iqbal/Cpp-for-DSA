#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="World";
    a=a+b;    // or a.append(b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    //string c= "A"; b=b+c;
    b.push_back('A');     // or b=b+"A";
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;
    return 0;
}