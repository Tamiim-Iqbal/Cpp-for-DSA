#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="HelloWorld";   //a.assign("HelloWorld")
    cout<<a<<endl;

    //a.erase(4);            //dlt all from 4
    a.erase(4,1);            //dlt 1 from 4
    cout<<a<<endl;

    a.replace(4,5,"o");
    cout<<a<<endl;

    a.insert(5,"Tamim");
    cout<<a<<endl;
    return 0;
}