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
class Father: public GrandFather
{
public:
    double weight;
};
class Child: public Father
{
public:
    int id;
};
int main()
{
}
