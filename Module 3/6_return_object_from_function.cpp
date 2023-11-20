#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    int cls;
    char section;

    Student(char name[], int id, int cls, char section)
    {
        this->id=id;
        this->section=section;
        this->cls=cls;
        strcpy(this->name,name);
    }
};
Student fun()
{
    char name[100]="Tamim";
    Student tamim(name,23,1,'A');
    return tamim;
}
Student* fun2()  //dynamic
{
    char name[100]="Iqbal";
    Student *tamim =  new Student(name,10,2,'B');
    return tamim;
}
int main()
{
    Student t=fun();

    cout<<t.name<<" "<<t.id<<" "<<t.cls<<" "<<t.section<<endl;

    Student* i=fun2();   //dynamic

    cout<<i->name<<" "<<i->id<<" "<<i->cls<<" "<<i->section<<endl;
}