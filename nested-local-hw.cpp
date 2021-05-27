#include<iostream>
using namespace std;
class Exame
{
public:
    int marks;

    class Testexame
    {
    public:
        string Grade;
        int Averagemarks;

        void display(string student_name)
        {
            cout<<"2nd class Grade "<<Grade<<endl;
            cout<<"2nd class Averagemarks "<<Averagemarks<<endl;

            class Student
            {
            public:
                string name;
                void display()
                {
                    cout<<"Student name "<< name <<endl;
                }
            };

            Student T3;
            T3.name=student_name;
            T3.display();
        }
    };
    Testexame T2;
    void display()
    {
        cout<<"1st class marks "<<marks<<endl;
    }
};
int main()
{
    Exame T1;
    T1.marks=90;
    T1.T2.Grade="A+";
    T1.T2.Averagemarks=85;
    T1.T2.display("boby");
    T1.display();
    return 0;
}





