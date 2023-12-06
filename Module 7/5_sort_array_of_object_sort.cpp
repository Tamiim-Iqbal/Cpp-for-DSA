#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)
{
             // 1st way
    // if(a.marks<b.marks) return true;
    // else return false;
            // 2nd way
    //return a.marks<b.marks;
            // 3rd way
    // if (a.marks<b.marks) 
    // {
    //     return true;
    // }
    // else if (a.marks>b.marks)
    // {
    //     return false;
    // }
    // else 
    // {
    //     return a.roll<b.roll;
    // }
            // 4th way
    if (a.marks==b.marks)
    {
        return a.roll<b.roll;
    }
    else 
    {
        return a.marks<b.marks;
    }
}
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+3,cmp);
    for (int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}