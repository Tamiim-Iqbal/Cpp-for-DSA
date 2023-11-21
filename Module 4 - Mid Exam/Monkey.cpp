#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000000];
    while (cin.getline(a,1000000))
    {
        int s = strlen(a);
        sort(a,a+s);
        for (int i=0; i<s; i++)
        {
            if (a[i] != ' ') cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}