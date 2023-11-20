#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int mx = INT_MIN;
    
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for (int i=0; i<n; i++)
    {
        mx=max(ar[i],mx);
    }
    cout<<mx;
    return 0;
}