#include<iostream>
using namespace std;
class family
{
    int members;
    string FathersName;
    string MothersName;
    string MyName;
public:
    family()
    {
        cout<<"Default Constructor called"<<endl;
    }
    family(int i)
    {
        cout<<"Parametrized Constructor called"<<endl;
        cin>>i;
        members=i;
    }
    family(string x,string y,string z)
    {
        cout<<"Parametrized Constructor called"<<endl;
        FathersName=x;
        MothersName=y;
        MyName=z;
    }
    family(const family &obj)
    {
        cout<<"Copy constructor called"<<endl;
        FathersName=obj.FathersName;
        MothersName=obj.MothersName;
        MyName=obj.MyName;
    }
    void get()
    {
        cout<<MyName<<endl;
        cout<<members<<endl;
        cout<<MothersName<<endl;
        cout<<FathersName<<endl;
    }
     ~family()
    {
        cout<<"Destructor called"<<endl;
    }

};
int main()
{
    //family family1;
    family family2(0);

    family family3("Rafiq","parvin","boby");
    family family4=family3;
    family family4=family2;
    family4.get();
    //family1.get();
}

