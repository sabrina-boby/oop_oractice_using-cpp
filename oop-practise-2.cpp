#include<iostream>
using namespace std;
class Person
{
protected:
    int age;
public:
    string name;
    /*Person()
    {
        cout<<"what u want";
    } */
    void setAge(int age)
    {
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
     void display()
    {
        cout<<"My name is "<<name<<" age "<<age<<" & access Level is:"<<endl;
    }
};
class Student : public Person
{

public:
    int id;
    void setId(int id)
    {
        this->id = id;
    }

};
class Admin : private Person
{
    int accessLevel;
public:
    Person::age;

    void setAccess(int access)
    {
        accessLevel=access;
    }
    void setName2(string n)
    {
        setName(n);
    }
};

int main()
{
    Student st1;
    st1.name="Nahid";
    st1.setAge(24);
    //Student st1();//
    st1.display();
    cout<<endl;
    Admin ad1;
    ad1.setName2("Korim");
    //ad1.setAge(30);
    ad1.setAccess(2);
    ad1.age = 26;
    ad1.display();
    return 0;
}

