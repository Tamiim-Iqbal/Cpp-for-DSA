#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        string x;
        cin>>s>>x;
        int index = s.find(x);
        while (index != -1)
        {
            s.replace(index,x.size(),"#");
            index = s.find(x);
        }
        cout<<s<<endl;
    }
    return 0;
}