#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"input text\n";
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"Number of characters"<<count<<endl;
}
