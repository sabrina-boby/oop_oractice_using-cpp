#include<stdio.h>
using namespace std;
class GrandFather
{
public:
    string name;
    int age;
    void display()
    {
    }
};
class GrandMother
{
public:
};
class Father: public GrandFather
{
public:
    double weight;
};
class Uncle: public GrandFather, public GrandMother
{
public:
    double weight;
};
class Child1: public Father
{
public:
    int id;
};
class Child2: public Father
{
public:
    int id;
};
class cousin1: public Uncle
{
};
class cousin2: public Uncle
{
};

int main()
{
}
