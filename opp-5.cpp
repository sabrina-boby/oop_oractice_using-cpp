#include<iostream>
using namespace std;
class Family
{
    int members;
    string FathersName;
    string MothersName;
    string MyName;
public:
    Family()
    {
        cout<<"Default Constructor called"<<endl;
    }
    Family(int i)
    {
        cout<<"Parametrized Constructor called"<<endl;
        //cin>>i;
        members=i;
    }
    Family(string x,string y,string z)
    {
        cout<<"Parametrized Constructor called"<<endl;
        cout<<"Enter FathersName :";
        cin>>x;
        cout<<"Enter MothersName :";
        cin>>y;
        cout<<"Enter YourName :";
        cin>>z;

        FathersName=x;
        MothersName=y;
        MyName=z;
    }
    Family(const Family &obj)
    {
        cout<<"Copy constructor called"<<endl;
        FathersName=obj.FathersName;
        MothersName=obj.MothersName;
        MyName=obj.MyName;
        members=obj.members;

    }
    void get_name()
    {
        cout<<MyName<<endl;
        cout<<MothersName<<endl;
        cout<<FathersName<<endl;
    }
    void get_members()
    {
        cout<<members<<endl;
    }
     ~Family()
    {
        cout<<"Destructor called"<<endl;
    }

};
int main()
{
    int m;
    Family family1;
    cin>>m;
    Family family2(m);

    Family family3("Rafiq","parvin","boby");
    Family family4=family3;
    Family family5=family2;
    family4.get_name();
    family5.get_members();

}
