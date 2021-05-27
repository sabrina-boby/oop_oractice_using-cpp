#include<iostream>
using namespace std;
class Plant
{
public:
    string plant_name;
    string species;
    string flower_blooming_month;
    Plant()
    {
        cout<<"Welcome to"<<endl;
    }
};
int main()
{
    Plant plant1;
    plant1.plant_name="Rose";
    plant1.species="Red flower";
    plant1.flower_blooming_month="April";

    Plant plant2;
    plant2.plant_name="Sun flower";
    plant2.species="Yellow flower";
    plant2.flower_blooming_month="December";
}
