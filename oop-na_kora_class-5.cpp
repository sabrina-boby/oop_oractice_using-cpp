#include<iostream>
using namespace std;
class Calculator
{
public:
    int add(int f, int s )
    {
        return f+s;
    }
    int add(int f, int s , int t )
    {
        return f+s+t;
    }
    double add(double f, double s)
    {
        return f+s;
    }
};
int main()
{
    Calculator c;
    cout<<c.add(10,12)<<endl;
    cout<<c.add(10,12,23)<<endl;
    cout<<c.add(10.2,12.5)<<endl;
    return 0;
}
