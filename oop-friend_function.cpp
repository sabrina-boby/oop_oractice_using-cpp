#include<iostream>
using namespace std;
class Person
{
    int age;
    string name;
public:
    Person()
    {
    }

    Person(int age, string name="No name")
    {
        this->age = age;
        this->name = name;
    }
    friend void display(Person obj);
};

void display(Person obj)
{
    cout<<obj.name << obj.age<<endl;
}

int main()
{
    Person nahid(24,"Md. Nahid");
    Person rayhan(30,"Rayhan Ahmed");
    display(rayhan);
    display(nahid);
}
