#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n; 
    // cin>>n;
    // int frq[26]={0};
    // for (int i=0; i<n; i++)
    // {
    //     char a;
    //     cin>>a;
    //     frq[a-'a']++;
    // }
    // for (char i='a'; i<='z'; i++)
    // {
    //     if (frq[i-'a']>0)
    //     {
    //         for (int j=0; j<frq[i-'a']; j++)
    //         {
    //             cout<<i;
    //         }
    //     }
    // }
    string s;
    cin>>s;
    int frq[26]={0};
    for (char c:s)
    {
        frq[c-'a']++;
    }
    for (char i='a'; i<='z'; i++)
    {
        for (int j=0; j<frq[i-'a']; j++)
        {
            cout<<i;
        }
    }


    return 0;
}