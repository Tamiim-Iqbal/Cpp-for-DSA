#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;     //(*this.)
            this->age = age;
        }
};
int main()
{
    Person* tamim = new Person("Tamim Iqbal",22);
    Person* sakib = new Person("Sakib Al Hasan",23);
    //tamim=sakib;
    // tamim->name=sakib->name;
    // tamim->age=sakib->age;
    *tamim=*sakib;
    delete sakib;
    cout<<tamim->name<<" "<<tamim->age<<endl;
    return 0;
}