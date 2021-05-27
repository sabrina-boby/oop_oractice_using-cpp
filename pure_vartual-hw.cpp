#include<iostream>
using namespace std;
class Game
{
public:
    virtual int startGame()=0;
private:
    virtual int startTestGame()=0;
};
class Samsung: public Game
{
public:
    int startGame()
    {
        cout<<"Game is on in Samsung!"<<endl;
    }
    int startTestGame()
    {
        cout<<"Start Game is on "<<endl;
    }
};
class IPhone: protected Game
{
public:
    int startGame()
    {
        cout<<"Game is on in IPhone!"<<endl;
    }
    int startTestGame()
    {
        cout<<"Start Game is on "<<endl;
    }
};
int main()
{
    IPhone iphn;
    Samsung sam;
    sam.startGame();
    sam.startTestGame();
    iphn.startGame();
    iphn.startTestGame();
    return 0;
}
