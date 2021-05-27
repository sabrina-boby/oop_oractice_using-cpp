#include<iostream>
using namespace std;
class Human
{
    string name;
    string bodyColor;
public:
    Human()
    {
        name="no name";
        bodyColor="no color";
        cout<<"Constructor Called"<<endl;
    }

    ~Human()
    {
        cout<<"Destructor called"<<endl;
    }

    void speak()
    {
        cout<<"My name is : "<<name<<endl;
    }
    void setName(string aname)
    {
        name=aname;
    }
    void setBodyColor(string bodyColor)
    {
        this->bodyColor=bodyColor;
    }
    void bodyColorJanao()
    {

        cout<<"My body color is "<<bodyColor<<endl;
    }

};


int main()
{
    Human sabbir;
    sabbir.bodyColorJanao();
    sabbir.speak();


    return 0;
}
