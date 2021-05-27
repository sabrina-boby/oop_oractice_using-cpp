#include<iostream>
using namespace std;
class Shape
{
protected:
    int line;
private:
    string color;
public:
    float area;
    Shape()
    {
        cout<<"Default constructor has been called..."<<endl;
    }
    void setLine(int line)
    {
        this->line = line;
    }
    void setColor(string color)
    {
        this->color = color;
    }
    void setArea(float area)
    {
        this->area = area;
    }
    void colorDisplay()
    {
        cout<<"color is "<<color<<endl;
    }
};

///for circle
class Circle : public Shape
{

public:
    int angle;
    void setAngle(int angle)
    {
        this->angle = angle;
    }
    void display()
    {
        cout<<"Line is "<<line<<endl<<"Area is "<<area<<endl;
    }
};

///for rectangle
class Rectangle : protected Shape
{
public:
    int angle;
    void setAngle(int angle)
    {
        this->angle = angle;
    }
    void display()
    {
        cout<<"Area is "<<area<<endl;
        cout<<"Line "<<line<<endl;
        cout<<"Angle "<<angle<<endl;
    }
    void setLine1(int line)
    {
        setLine(line);
    }
    void setArea1(float area)
    {
        setArea(area);
    }
    void setColor1(string color)
    {
        setColor(color);
        colorDisplay();
    }

};

///for triangle
class Triangle : private Shape
{
public:
    int angle;
    //Shape::area;
    void display()
    {
        cout<<"Triangle area is "<<area<<endl<<"angle is:"<<angle<<endl;
    }
    void setAngle(int angle)
    {
        this->angle=angle;
    }
    void setColor1(string color)
    {
        setColor(color);
        colorDisplay();
    }
    void setArea(float area)
    {
        this->area = area;
    }
};

int main()
{
    //for circle
    cout<<"Circle Information......."<<endl;
    Circle st1;
    st1.setLine(1);
    st1.area =3.1416 * 2 * 2;
    st1.angle=180;
    st1.setColor("black");
    st1.colorDisplay();
    st1.display();
    cout<<endl;


    //for rectangle
    cout<<"Rectangle Information......."<<endl;
    Rectangle tri1;
    tri1.setLine1(4);
    tri1.setArea1(5 * 5);
    tri1.angle=360;
    tri1.setColor1("orange");
    tri1.display();
    cout<<endl;

    //for triangle
    cout<<"Triangle Information......."<<endl;
    Triangle ad1;
    ad1.setArea(0.5*5*6);
    ad1.angle = 90;
    ad1.setColor1("red");
    ad1.display();


    return 0;
}

