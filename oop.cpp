#include<iostream>
using namespace std;

class Cat
{
    public:
        int age;
        int weight;
        string name;

        void characteristic(int a, int b, string c)
        {
            age = a;
            weight = b;
            name = c;

        }

        void display()
        {
         cout<< "Age :"<<age<<"  Weight: " <<weight<<"  Name: "<<name;
        }

};

int main()
{
    Cat rayhan;
    rayhan.characteristic(24,60,"ahmed");
    rayhan.display();

    return 0;
}
