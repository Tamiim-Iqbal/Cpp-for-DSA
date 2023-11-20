#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    double cgpa;

};
int main()
{
    // Student tamim;
    // tamim.id=23;
    // tamim.cgpa=3.90;
    // char nm[100]="Tamim Iqbal";
    // strcpy(tamim.name,nm);

    // cout<<tamim.name<<endl;
    // cout<<tamim.id<<endl;
    // cout<<tamim.cgpa<<endl;

    Student t,s;
    cin.getline(t.name,100);
    cin>>t.id>>t.cgpa;
    cout<<t.name<<" "<<t.id<<" "<<t.cgpa<<endl;
    getchar();
    cin.getline(s.name,100);
    cin>>s.id>>s.cgpa;
    cout<<s.name<<" "<<s.id<<" "<<s.cgpa;
    return 0;
}