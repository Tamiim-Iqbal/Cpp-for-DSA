// #include<iostream>
// using namespace std;
// int my_min(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }
// int my_max(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int mn=my_min(a,b);
//     int mx=my_max(a,b);
//     cout<<"Min:"<<mn<<" "<<"Max: "<<mx<<endl;
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);

    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // int mn = min({a, b, c, d});
    // int mx = max({a, b, c, d});

    cout<<"Min:"<<mn<<" "<<"Max: "<<mx<<endl;
    return 0;
}
