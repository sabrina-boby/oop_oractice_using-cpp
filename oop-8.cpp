#include<iostream>
using namespace std;
class Person
{
public:
    int age;
    static string objectCount;
    Person()
    {
        //++objectCount;
        cout<<"This is "<<objectCount<<"th number of object"<<endl;
    }
    static void display()
    {
        objectCount ="Mahbub";
        cout<<"from display: "<<objectCount<<endl;
    }
};
string Person::objectCount ="Noname";
int main()
{
    Person sujon;
    Person Sabbir;
    cout<<Person::objectCount;
    Person nahid;
    Person::display();
    cout<<"This is from main function"<<Person::objectCount<<endl;
    cout<<"This is from main function"<<sujon.objectCount;
}
