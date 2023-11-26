#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout<<s<<endl;

    cout<<s.size()<<endl;

    cout<<s.max_size()<<endl;

    cout<<s.capacity()<<endl;

    s.clear();
    cout<<s<<endl;

    if (s.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    string a;
    cin>>a;
    a.resize(10,'X');
    cout<<a<<endl;

    
    
    return 0;
}