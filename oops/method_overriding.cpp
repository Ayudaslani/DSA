#include <iostream>
using namespace std;

class Shape
{
public:
    //    virtual void draw() = 0; // pure virtual function

    virtual void draw()
    {
        cout << "Drawing ..."; // default implementation
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle ...";
    }
};
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Rectangle ..";
    }
};
class Triangle : public Shape
{

public:
    void draw() override
    {
        cout << "Triangle..";
    }
};

int main()
{
    Shape *s;

    Circle c;
    Triangle t;
    Rectangle r;

    s = &c;
    s->draw();

    s = &t;
    s->draw();

    s = &r;
    s->draw();
    return 0;
}