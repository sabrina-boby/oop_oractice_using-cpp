#include<iostream>
using namespace std;
class Parents
{
public:
    void display()
    {
        cout<<"I'm from Parents class"<<endl;
    }
};
class Child1:public Parents
{
    public:
    void display(int a,int b)
    {
        int z=a+b;
        cout<<"my result is = "<<z<<endl;
    }
    void display(int a,float b,int c)
    {
        int z=a+b+c;
        cout<<"my result is = "<<z<<endl;
    }
};
class Child2:public Parents
{
    public:
    void display()
    {
        cout<<"I'm from child2 class"<<endl;
    }
};
int main()
{
    Parents parents;
    Child1 child1;
    Child2 child2;
    child1.display(10,20);
    child1.display(10,3.20,10);
    child2.display();
    child2.Parents::display();
}

