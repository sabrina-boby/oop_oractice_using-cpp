#include<iostream>
using namespace std;

class Person
{
public:
    int age;
    string colour;
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
    Person(string colour,int age=0)
    {
      this->colour=colour;
      this->age=age;
      //cout<<colour<<endl;
    }
    friend void display(Person information);
};
void display(Person information)
{
    cout<<information.colour<<endl;
    cout << information.age<<endl;
}


int Person::objectCount =0;

int main()
{
    Person sujon(5);
    cout<<sujon.age<<endl;
    cout<<sujon.objectCount<<endl;
    Person sabbir(6);
    cout<<sabbir.age<<endl;
    cout<<sabbir.objectCount<<endl;
    Person nahid(7);
    cout<<nahid.age<<endl;
    cout<<nahid.objectCount<<endl;
    Person sumon("blue");
    sumon.colour;
    display(sumon);
    cout<<Person::objectCount;

}
