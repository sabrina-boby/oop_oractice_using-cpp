#include<iostream>
using namespace std;
class Car
{

    int *width;
    public:
    Car()
    {
    }

    Car(int w)
    {

        cout<<"parameterized constructor called"<<endl;
        width = new int;
        *width = w;
    }

    Car(const Car &obj)
    {
        cout<<"copy constructor called"<<endl;
        width = new int;
        *width = *obj.width;
    }

    int getwidth()
    {
        return *width;
    }
    ~Car()
    {
        delete width;
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    Car car1(34);
    //cout<<*car1.width;

    Car car2 = car1;
    cout<<car2.getwidth()<<endl;
}
