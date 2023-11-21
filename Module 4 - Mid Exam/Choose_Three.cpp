#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t>0)
    {
        int n,sum;
        cin>>n>>sum;
        int ar[n];
        for (int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int flag = 0;
        for (int x=0; x<n; x++)
        {
            for (int y=x+1; y<n; y++)
            {
                for (int z=y+1; z<n; z++)
                {
                    if (ar[x]+ar[y]+ar[z] == sum)
                    {
                        flag=1;
                    }
                }
            }
        }
        if (flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    t--;
    }
    return 0;
}