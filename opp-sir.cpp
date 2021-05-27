#include<iostream>
using namespace std;

class Human
{
    string name;
    string bodyColor;
public:
    void speak()
    {
        cout<<"My name is "<<name<<endl;
    }
    void setName(string aname)
    {
        name=aname;
    }
};


int main()
{
    Human korim;
    korim.setName("Sabbir");

    korim.speak();

    return 0;
}
