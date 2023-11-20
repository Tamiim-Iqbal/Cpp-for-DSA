#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
    char q;
    cin>>q;
    int c;
    cin>>c;

    switch (s)
    {
        case '+':
        {
            (a+b==c)? cout<<"Yes" : cout<<a+b;
            break;
        }
        case '-':
        {
            (a-b==c)? cout<<"Yes" : cout<<a-b;
            break;
        }
        case '*':
        {
            (a*b==c)? cout<<"Yes" : cout<<a*b;
            break;
        }
    }
    return 0;
}