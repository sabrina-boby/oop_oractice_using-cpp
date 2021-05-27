#include<iostream>
using namespace std;
class Plant
{
public:
    int id;
    string plant_name;
    string species;
    string flower_blooming_month;

    Plant(int id, string plant_name, string species, string flower_blooming_month)
    {
        this->id=id;
        this->plant_name=plant_name;
        this->species=species;
        this->flower_blooming_month=flower_blooming_month;
    }
};

int main()
{
    Plant *plant1 = new Plant(1, "Rose", "Red flower", "April");
    Plant *plant2 = new Plant(2, "Sun flower", "Yellow flower", "December");

    delete plant1;
    delete plant2;

}





/*#include<iostream>
using namespace std;
class Plant
{

public:
    int id;
    string plant_name;
    string species;
    string flower_blooming_month;

    Plant(int id, string plant_name, string species, string flower_blooming_month)
    {
        this->id=id;
        this->plant_name=plant_name;
        this->species=species;
        this->flower_blooming_month=flower_blooming_month;
    }
    ~Plant()
    {

    }
};

int main()
{
    Plant plant1(1, "Rose", "Red flower", "April");
    Plant plant2(2, "Sun flower", "Yellow flower", "December");
}
*/
