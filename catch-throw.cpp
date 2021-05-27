#include<iostream>
#include<exception>
using namespace std;
int main()
{
    int i=6,j,r;
    try
    {
        cout<<"Input the divisor:"<<endl;
        cin>>j;
        if(j==0)
            throw 404;
        else if(j==1)
            throw "You should not input 1";
        r = i/j;
        cout<<"Output:"<<r<<endl;
    }
    catch(const int error)
    {
        cout<<"Error occured:"<<error<<endl;
    }
    catch(const char *e)
    {
        cout<<"Error occured:"<<e<<endl;
    }
    return 0;
}
