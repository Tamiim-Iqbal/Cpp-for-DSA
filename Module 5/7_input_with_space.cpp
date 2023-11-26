#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
    cin>>x;
    //cin.ignore();   //ignore enter
    getchar();        //ignore enter

    string s;
    //cin>>s;      // without space
    //cin.getline(s,100);     //char s[100]
    getline(cin,s);      //with space 
    
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}