#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int id;
    string dept_name;
    string dept_info;
    Student()
    {
        dept_name="CSE";
        dept_info="computer science and engineering";
    }
    void show()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<dept_name<<endl;
        cout<<dept_info<<endl;
    }
} ;
int main()
{
    Student dept1,dept2;
    dept1.name="sabrina boby";
    dept1.id=1234512;

    dept2.name="labonno akter";
    dept2.id=4566666;

    dept1.show();
    dept2.show();
}
