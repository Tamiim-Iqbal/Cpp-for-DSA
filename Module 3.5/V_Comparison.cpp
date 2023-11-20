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

    switch (s)
    {
        case '>':
        {
            (a>b)? cout<<"Right" : cout<<"Wrong";
            break;
        }
        case '<':
        {
            (a<b)? cout<<"Right" : cout<<"Wrong";
            break;
        }
        case '=':
        {
            (a==b)? cout<<"Right" : cout<<"Wrong";
            break;
        }
    }
    return 0;
}