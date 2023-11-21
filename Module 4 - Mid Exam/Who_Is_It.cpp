#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        char name[100];
        char sec;
        int num;

    Student(int id, char name[], char sec, int num)
    {
        this->id=id;
        strcpy(this->name,name);
        this->sec=sec;
        this->num=num;
    }
};
int main()
{
    int n; cin>>n;
    while (n>0)
    {
        int id; cin>>id;
        char name[100]; cin>>name;
        char sec; cin>>sec;
        int num; cin>>num;

        Student a(id,name,sec,num);

        int id2; cin>>id2;
        char name2[100]; cin>>name2;
        char sec2; cin>>sec2;
        int num2; cin>>num2;

        Student b(id2,name2,sec2,num2);

        int id3; cin>>id3;
        char name3[100]; cin>>name3;
        char sec3; cin>>sec3;
        int num3; cin>>num3;

        Student c(id3,name3,sec3,num3);

        if (a.num>=b.num && a.num>=c.num)
        {
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.num<<endl;
        }
        else if (b.num>=c.num && b.num>=a.num)
        {
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.num<<endl;
        }
        else 
        {
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.num<<endl;
        }
        n--;
    }
    return 0;
}