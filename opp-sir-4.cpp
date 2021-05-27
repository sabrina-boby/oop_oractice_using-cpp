#include<iostream>
using namespace std;
class Student
{
    int id;
    string name;
public:
    Student()
    {
    }
    Student(int i)
    {
        id=i;
    }
    Student(int i,string x)
    {
        id=i;
        name=x;
    }
    Student(const Student &obj)
    {
        id=obj.id;
        name=obj.name;
    }
    void get()
    {
        cout<<id<<endl; cout<<name<<endl;
}

};
int main()
{
    Student student1;
    Student student2(25);
    Student student3(26,"Rahim");
    Student student4=student3;
    student4.get();
}
