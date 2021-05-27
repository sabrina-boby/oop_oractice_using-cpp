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
        else if(j<0)
            throw runtime_error("You should input greater then 0");

        r = i*j;

        if(r>=600)
            throw "It is out of range";
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
    catch(runtime_error error)
    {
        cout<<"Error occured:"<<error.what()<<endl;
    }

    return 0;
}
