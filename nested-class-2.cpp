#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    class Subject
    {
        public:
        int subject_code;
        string subject_name;
        void display()
        {
            cout<<subject_code<<" "<<subject_name<<endl;
        }
    };
    Subject subject1;
    Subject subject2;
    void display()
    {
        cout<<"Student id: "<<id<<"\n Student name: "<<name<<endl;
        subject1.display();
        subject2.display();
    }
};
int main()
{
    Student korim;
    korim.id = 30;
    korim.name = "Mr. Korim";
    korim.subject1.subject_code = 216;
    korim.subject1.subject_name = "Math";
    korim.subject2.subject_code = 217;
    korim.subject2.subject_name = "OOP";
    korim.display();
    return 0;
}
