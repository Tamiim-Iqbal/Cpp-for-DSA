#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int x=0;
    int y=n-1;
    int flag = 1;
    while(x<y)
    {
        if (ar[x]!=ar[y])
        {
            flag = 0;
        }
    x++;
    y--;
    }
    if (flag==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}