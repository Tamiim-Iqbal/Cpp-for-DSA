#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3];
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for (int i=0; i<3; i++)
    {
        cin>>ar[i];
    }
    for (int i=0; i<3; i++)
    {
        mx=max(ar[i],mx);
    }
    for (int i=0; i<3; i++)
    {
        mn=min(ar[i],mn);
    }
    cout<<mn<<" "<<mx;
    return 0;
}