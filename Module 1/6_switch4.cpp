#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    for (int i=1; i<=n; i++)
    {
        switch(i%2)
        {
            case 0:
                even++;
                break;
            case 1:
                odd++;
                break;
        }
    }
    cout<<"Even: "<<even<<" "<<"Odd: "<<odd<<endl;
}