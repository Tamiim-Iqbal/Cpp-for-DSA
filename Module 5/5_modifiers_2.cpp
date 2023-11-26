#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="HelloWorld";   //a.assig(HelloWorld)
    cout<<a<<endl;

    //a.erase(4);            //dlt all from 4th index
    a.erase(4,1);            //dlt 1 char from 4th index
    cout<<a<<endl;

    a.replace(4,5,"o");
    cout<<a<<endl;

    a.insert(5,"Tamim");
    cout<<a<<endl;
    return 0;
}