#include<iostream>
using namespace std;

class Person
{
public:
    int age;
    static int objectCount;

    Person()
    {
        cout<<"This is number of object"<<endl;
    }

    Person(int x)
    {
        ++objectCount;
        age=x;
        cout<<"This is "<<objectCount<<"th number of object"<<endl;
    }
};

int Person::objectCount =0;

int main()
{
    Person sujon(5);
    Person sabbir(6);
    Person nahid(7);

    cout<<sujon.age<<endl;
    cout<<sabbir.age<<endl;
    cout<<nahid.age<<endl;

    cout<<sujon.objectCount<<endl;
    cout<<sabbir.objectCount<<endl;
    cout<<nahid.objectCount<<endl;
}
