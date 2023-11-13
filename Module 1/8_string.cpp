#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100];
    int n;
    cin>>n;
    getchar();     //to ignore enter
    cin.getline(s,100);  //take space (not enter)
    cout<<s<<endl;
    cout<<strlen(s);
    return 0;
}


//without space

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char s[100];
//     cin>>s;
//     cout<<s;
// }
