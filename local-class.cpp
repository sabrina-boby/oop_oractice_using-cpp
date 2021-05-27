#include<iostream>
#include<stdexcept>
using namespace std;
int fun()
{
    class Subject
    {
        public:
        int subject1;
        int subject2;
        void display()
        {
            cout<<subject1<<endl;
        }
    };
    Subject sub;
    sub.subject1=5;
    sub.display();
}
int main()
{
    fun();
    return 0;
}
