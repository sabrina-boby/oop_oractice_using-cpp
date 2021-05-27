#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int i=6,j,r;
    try
    {
        cout<<"Input the divisor:"<<endl;
        cin>>j;
        if(j==0)
            throw runtime_error("You should input anything except 0");
            r=j/i;
        cout<<"Output:"<<r<<endl;
    }
    catch(runtime_error error)
    {
        cout<<"Error occured:"<<error.what()<<endl;
    }
    return 0;
}
