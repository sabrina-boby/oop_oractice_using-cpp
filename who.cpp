#include<iostream>
using namespace std;
class User
{
public:
    virtual void display()
    {
        cout<<"I'm from User class"<<endl;
    }
};
class Student: public User
{
public:
     void display()
    {
        cout<<"I'm from Student class"<<endl;
    }
};
class studentLeader: public Student
{
public:
};

void who(User &u)
{
    u.display();
}
int main()
{
    User user1;
    Student student1;
    studentLeader leader1;
    who(user1);
    who(student1);
    who(leader1);
    return 0;
}
