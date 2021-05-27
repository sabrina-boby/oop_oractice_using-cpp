#include<iostream>
#include<stdexcept>
using namespace std;
class Student
{
    public:
    int id;
    class Subject
    {
        public:
        int subject1;
        int subject2;

        Subject()
        {
            cout<<"i am constructoisr ";
        }
    };
    Subject sub;
};
int main()
{
    Student korim;
    korim.sub.subject1 =30;
    return 0;
}
