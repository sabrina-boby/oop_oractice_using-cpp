#include<iostream>
using namespace std;
class Camera
{
public:
   virtual int onFlashLight()=0;
};

class Android: public Camera
{
    public:
    int onFlashLight()
    {
        cout<<"FlashLight is on!"<<endl;
    }
};
class IPhone: public Camera
{
    public:
    int onFlashLight()
    {
        cout<<"FlashLight is on in IPhone!"<<endl;
    }
};
int main()
{
    IPhone b;
    b.onFlashLight();
    return 0;
}
