#include<iostream>
using namespace std;
class student
{
private:
    float cgpa;
public:
    void setcgpa(float cgpa)
    {
        this->cgpa = cgpa;
    }
    void cgpaprint()
    {
        cout<<cgpa<<endl;
    }
};
int main()
{
    student stu;
    stu.setcgpa(3.92);
    stu.cgpaprint();
}
