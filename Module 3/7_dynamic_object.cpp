#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    int cls;
    char section;

    Student(char *n, int i, int c, char s)
    {
        id=i;
        section=s;
        cls=c;
        strcpy(name,n);
    }
};
int main()
{
    char name[100]="Tamim Iqbal";
    Student *tamim = new Student(name,23,1,'A');
    (*tamim).id=55;   //tamim->id=55;

    cout<<tamim->name<<" "<<tamim->id<<"  "<<tamim->cls<<" "<<tamim->section<<endl;

    delete tamim;         //Delete an Object
    // cout<<tamim->name<<" "<<tamim->id<<"  "<<tamim->cls<<" "<<tamim->section<<endl;
    
    return 0;
}