#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        int r;
        float ans;
        cout << "Enter the radius :- ";
        cin >> r;
        ans = 3.14 * r * r;
        cout << "Area of circle :- " << ans << endl;
    }
};
class Triangle : public Shape
{
public:
    void draw()
    {
        int b, h;
        float ans;
        cout << "Enter the base :- ";
        cin >> b;
        cout << "Enter the height :- ";
        cin >> h;
        ans = 0.5 * b * h;
        cout << "Area of Triangle :- " << ans << endl;
    }
};

int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->draw();
    Triangle t;
    s = &t;
    s->draw();

    return 0;
}