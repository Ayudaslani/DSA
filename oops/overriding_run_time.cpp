#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing ..." << endl;
    }
};
class Circle : public Shape
{
public:
    int r;
    void draw() override
    {
        cout << "Enter the radius :-";
        cin >> r;
        float ans = 3.14 * r * r;
        cout << "Area of circle is :-  " << ans << endl;
    }
};
class Traingle : public Shape
{
public:
    int h, b;
    void draw() override
    {
        cout << "Enter the height :-";
        cin >> h;
        cout << "Enter the base :-";
        cin >> b;
        float ans = 0.5 * h * b;
        cout << "Area of Traingle is :-  " << ans << endl;
    }
};
class Rectangle : public Shape
{
public:
    int h, w;
    void draw() override
    {
        cout << "Enter the height :-";
        cin >> h;
        cout << "Enter the width :-";
        cin >> w;
        float ans = h * w;
        cout << "Area of Rectangle is :-  " << ans << endl;
    }
};

int main()
{
    Shape *s1;

    Circle c;
    Traingle t;
    Rectangle r;

    s1 = &c;
    s1->draw();
    s1 = &t;
    s1->draw();
    s1 = &r;
    s1->draw();

    return 0;
}