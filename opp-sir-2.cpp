#include<iostream>
using namespace std;

class Human
{
   public:  string name;
   private: string bodyColor;
private:
   void speak()
    {
        cout<<"My name is "<<name<<endl;
    }
public:
    void setName(string aname)
    {
        name=aname;
        speak();
    }

    void setBodyColor(string bodyColor)
    {
        this->bodyColor = bodyColor;
    }
    void bodyColorJanao()
    {
        cout<<"My body color is "<<bodyColor<<endl;
    }
};




class Country
{
    public:  string name;
    private: string capital;

private:
   void countryName()
    {
        cout<<"My country name  is "<<name<<endl;
    }

public:
    void setName(string aname)
    {
        name=aname;
        countryName();
    }

    void setCapital(string capital)
    {
        this->capital = capital;
    }
    void capitalJanao()
    {
        cout<<"My capital name is "<<capital<<endl;
    }
};







int main()
{
    Human sabbir;
    string name;
    cin>>name;
    sabbir.setName(name);

    Country sabbir1;
    sabbir1.setName("bd");

    //sabbir.setBodyColor("Green");
   // sabbir.bodyColorJanao();
    ////sabbir.speak();
    return 0;
}
