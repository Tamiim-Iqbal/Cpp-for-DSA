#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int res=s.find("EGYPT");
    while (res != -1)
    {
        s.replace(res, 5, " ");
        res = s.find("EGYPT");
    }
    cout << s;
}