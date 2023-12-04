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
        void hello()
        {
            cout<<name<<" "<<age<<endl;
        }
};
int main()
{
    Person tamim("Tamim Iqbal",22);
    tamim.hello();
    return 0;
}