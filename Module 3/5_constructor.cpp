#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    int cls;
    char section;

    // Student(char n[], int i, int c, char s)
    // {
    //     id=i;
    //     section=s;
    //     cls=c;
    //     strcpy(name,n);
    // }
    Student(char name[], int id, int cla, char section)
    {
        this->id=id;
        this->section=section;
        (*this).cls=cls;             // this->cls=cls
        strcpy(this->name,name);
    }
};
int main()
{
    Student tamim("Tamim",10,1,'A');
    Student iqbal("Iqbal",23,2,'B');

    cout<<tamim.name<<" "<<tamim.id<<" "<<tamim.cls<<" "<<tamim.section<<endl;

    cout<<iqbal.name<<" "<<iqbal.id<<" "<<iqbal.cls<<" "<<iqbal.section<<endl;

    return 0;
}