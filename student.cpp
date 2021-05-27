#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int size=11;
    char ch[200];
    cout<<"enter your phone number:";
    cin.getline(phone_number,size);
    cout<<"your phone number is:";
    cout.write(number,size);
        int count=0;
    char ch;
    cout<<"input text:";
    cin.get(ch);
    while(ch!='\0')
            {
                cout.put(ch);
                count++;
                cin.get(ch);
            }
            cout<<"total characters:"<<endl;
            int w,p;
            cout<<"enter the width and the precision:"<<endl;
            cin>>w>>p;
            (ios::scientific,ios::float field);
            cout.width(15);
            cout<<3.1416;
            return 0;
}
