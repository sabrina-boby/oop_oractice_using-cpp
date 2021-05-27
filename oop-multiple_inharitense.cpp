#include<iostream>
using namespace std;
class GrandFather
{
private:
    int house;
protected:
    int bank;
public:
    string watch;
    void bankmoney(int bank)
    {
        this->bank=bank;
    }
    void grandfatherhouse(int house)
    {
        this->house=house;
    }
    void housedisplay2()
    {
        cout<<"House = "<<house<<endl;
    }
};

class GrandMother
{
private:
    int laptop;
protected:
    int ornaments;
public:
    string cloth;
    void grandmotherclothes(string cloth)
    {
        this->cloth=cloth;
    }
    void GMornaments(int ornaments)
    {
        this->ornaments=ornaments;
    }
    void GMlaptop(int laptop)
    {
        this->laptop=laptop;
        GMdisplay();
    }
    void GMdisplay()
    {
        cout<<"cloth = "<<cloth<<endl;
        cout<<"ornaments = "<<ornaments<<endl;
        cout<<"laptop = "<<laptop<<endl;
    }
};

class Father : public GrandFather
{
public:
    int cellphone;
    void bankballence(int bank)
    {
        this->bank=bank;
    }
    void display()
    {
        cout<<"Father's bankballence = "<<bank/2<<endl;
        cout<<"Father's watch = "<<watch<<endl;
        cout<<"Father's cellphone = "<<cellphone<<endl;
    }
    void houseown(int z)
    {
        grandfatherhouse(z);
        housedisplay2();
    }
};

class Uncle : protected GrandFather, private GrandMother
{
protected:
    int store;
public:
    GrandFather::watch;
    void bankballence(int bank)
    {
        bankmoney(bank);
    }
    void display()
    {
        cout<<"Uncle's bankballence = "<<bank<<endl;
        cout<<"Uncle's watch = "<<watch<<endl;
        cout<<"Uncle's store = "<<store<<endl;
    }
    void houseown(int z)
    {
        grandfatherhouse(z);
        housedisplay2();
    }
    void uncleclothes(string c)
    {
        grandmotherclothes(c);
    }
    void uncleornaments(int o)
    {
        GMornaments(o);
    }
    void unclelaptop(int l)
    {
        GMlaptop(l);
    }
    void unclestore(int store)
    {
        this->store=store;
    }
};
class Child1: public Father
{
public:
    void bankballence(int bank)
    {
        this->bank=bank;
    }
    void houseown(int h)
    {
        grandfatherhouse(h);
        housedisplay2();
    }
    void display()
    {
        cout<<"child1 cellphone = "<<cellphone<<endl;
        cout<<"child1 bankballence = "<<bank<<endl;
        cout<<"child1 watch = "<<watch<<endl;
    }
};
class Child2: protected Father
{
public:
    void bankballence(int bank)
    {
        this->bank=bank;
    }
    void child2cellphone(int cellphone)
    {
        this->cellphone=cellphone;
    }
    void child2watch(string watch)
    {
        this->watch=watch;
    }
     void houseown(int h)
    {
        grandfatherhouse(h);
        housedisplay2();
    }
    void display()
    {
        cout<<"child2 cellphone = "<<cellphone<<endl;
        cout<<"child2 bankballence = "<<bank<<endl;
        cout<<"child2 watch = "<<watch<<endl;
    }
};
class Cousin1: private Uncle
{
public:
    void cousinstore(int store)
    {
        this->store=store;
    }
    void bankballence(int bank)
    {
        this->bank=bank;
    }
    void cousin1watch(string watch)
    {
        this->watch=watch;
    }
    void cousinclothes(string cloth)
    {
        uncleclothes(cloth);
    }
    void cousinornaments(int ornaments)
    {
        uncleornaments(ornaments);
    }
    void cousinlaptop(int laptop)
    {
        unclelaptop(laptop);
    }
    void display()
    {
        cout<<"cousin1's store = "<<store<<endl;
        cout<<"cousin1's bank = "<<bank<<endl;
        cout<<"cousin1's watch = "<<watch<<endl;
    }
};
class Cousin2: public Uncle
{
public:
    void cousinstore(int store)
    {
        unclestore(store);
    }
    void bankballence(int bank)
    {
        this->bank=bank;
    }
    void cousin2watch(string watch)
    {
        this->watch=watch;
    }
    void cousin2house(int house)
    {
        grandfatherhouse(house);
        housedisplay2();
    }
    void cousinclothes(string cloth)
    {
        uncleclothes(cloth);
    }
    void cousinornaments(int ornaments)
    {
        uncleornaments(ornaments);
    }
    void cousinlaptop(int laptop)
    {
        unclelaptop(laptop);
    }
    void display()
    {
        cout<<"cousin2's store = "<<store<<endl;
        cout<<"cousin2's bankballenc = "<<bank<<endl;
        cout<<"cousin2's watch = "<<watch<<endl;
    }
};
int main()
{
    Father fat;
    fat.bankballence(500000000);
    fat.watch="Rolex";
    fat.houseown(2);
    fat.cellphone=1;
    fat.display();
    cout<<endl;

    Uncle unc;
    unc.bankballence(250000000);
    unc.watch="Breguet";
    unc.houseown(0);
    unc.uncleclothes("shari , lehenga");
    unc.uncleornaments(4);
    unc.unclelaptop(2);
    unc.unclestore(2);
    unc.display();
    cout<<endl;

    Child1 ch1;
    ch1.cellphone=1;
    ch1.bankballence(250000000/2);
    ch1.watch="Rolex";
    ch1.houseown(1);
    ch1.display();
    cout<<endl;

    Child2 ch2;
    ch2.child2cellphone(1);
    ch2.bankballence(250000000/2);
    ch2.child2watch("no watch");
    ch2.houseown(1);
    ch2.display();
    cout<<endl;

    Cousin1 co1;
    co1.cousinstore(1);
    co1.bankballence((250000000/2)/2);
    co1.cousin1watch("Breguet");
    co1.cousinclothes("shari");
    co1.cousinornaments(2);
    co1.cousinlaptop(1);
    co1.display();
    cout<<endl;


    Cousin2 co2;
    co2.cousinstore(1);
    co2.bankballence((250000000/2)/2);
    co2.cousin2watch("no watch");
    co2.cousin2house(1);
    co2.cousinclothes("lehenga");
    co2.cousinornaments(2);
    co2.cousinlaptop(1);
    co2.display();
    cout<<endl;
}
