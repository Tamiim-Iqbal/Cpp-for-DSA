// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *a = new int;
//     *a = 10;
//     cout<<*a<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float *f = new float;
//     *f = 2.56;
//     cout<<*f<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int *a = new int;
    cout<<"Fun:"<<a<<endl;
    *a = 100;
    return a; 
}
int main()
{
    int *p = fun();
    cout<<"Main:"<<p<<endl;
    cout<<"Main:"<<*p<<endl;

}