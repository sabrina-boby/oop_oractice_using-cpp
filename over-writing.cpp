#include<iostream>
using namespace std;
class User
{
public:
    void display()
    {
        cout<<"I'm from User class"<<endl;
    }
};
class Student:public User
{
    public:
    void display()
    {
        cout<<"I'm from Student class"<<endl;
    }
};
class Admin:public User
{
    public:
    void display()
    {
        cout<<"I'm from Admin class"<<endl;
    }
};
int main()
{
    User user1;
    Student student1;
    Admin admin1;
    user1.display();
    student1.display();
    admin1.display();
    student1.User::display();
}
