#include<iostream>
using namespace std;
class Account
{
private:
    int account_number;
public:
    string customers_name;
    string address;
    string friends_name;
    Account(string customers_name,string address,string friends_name,int account_number)
    {
        this->customers_name=customers_name;
        this->address=address;
        this->friends_name=friends_name;
        this->account_number=account_number;
    }
};
int main()
{
    Account info("Sabrina Boby","baganbari","labonno",678);

    info.customers_name="Sabrina Akter Boby.";
    info.address="Vashentek baganbari.";
    info.friends_name="Labonno Akter.";
}
