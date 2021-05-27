#include<iostream>
using namespace std;
class Train
{
private:
    int id;
    string train_name;
    string purchasing_date;
    string arrival_time;
    string leaving_time;
public:
    string driver_name;
    Train(int id,string train_name,string driver_name,string purchasing_date,string arrival_time,string leaving_time)
    {
        this->id=id;
        this->train_name=train_name;
        this->driver_name=driver_name;
        this->purchasing_date=purchasing_date;
        this->arrival_time=arrival_time;
        this->leaving_time=leaving_time;
    }
};
int main()
{
    Train info(45,"Paddma express","Arik Isthiaque","2 jun","05:00 am","12:00 pm");

    info.driver_name="Karik Sharker";
}
