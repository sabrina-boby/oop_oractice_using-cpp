#include<iostream>
using namespace std;
int main()
{
    int i,j,n,position,y,z;
    char x;

    cin>>i;
    cin>>j;

    while(x!='S')
    {
        cin>>x;
        if(x =='U')
        {
            y=--i;
            z=j;
        }
        if(x =='D')
        {
            y=++i;
            z=j;
        }
        if(x =='L')
        {
            y=i;
            z=--j;
        }
        if(x =='R')
        {
            y=i;
            z=++j;
        }
        if(x=='s')
        {
            break;
        }
        //i=y;
        //j=z;
    }
    cout<<i<<","<<j<<endl;
}
