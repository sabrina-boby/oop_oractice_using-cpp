#include<iostream>
using namespace std;
class A
{
protected:
    int q;
public:
    int age;
    void setage(int age)
    {
        this->age=age;
        cout<<"parents = "<<age<<endl;
    }
};
class B: virtual public A
{
public:
};
class C: virtual public A
{
public:
};
class D: public B, public C
{
public:
    //string name;
    void display()
    {
        cout<<"age = "<<age<<endl;
    }
};

int main()
{
    A spt;
    D obj;
    //spt.age = 12;
    spt.setage(5);
    obj.display();
    return 0;
}
