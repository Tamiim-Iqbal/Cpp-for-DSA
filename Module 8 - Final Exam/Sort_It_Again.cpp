#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool cmp(Students a, Students b)
{
    if (a.eng_marks == b.eng_marks) 
    {
        if (a.math_marks == b.math_marks) return a.id<b.id;
        else return a.math_marks>b.math_marks;
    }
    else 
    {
        if (a.eng_marks>b.eng_marks) return true;
        else return false; 
    }
}
int main(){
    int n;
    cin>>n;
    Students a[n];
    for (int i=0; i<n; i++)
    {
       cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a, a+n, cmp);
    for (int i=0; i<n; i++)
    {
       cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}