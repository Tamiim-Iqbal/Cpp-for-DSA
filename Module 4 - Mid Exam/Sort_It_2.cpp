#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int *ar = new int [n];
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    return ar;
}
int main()
{
    int n; cin>>n;
    int *a = sort_it(n);
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}