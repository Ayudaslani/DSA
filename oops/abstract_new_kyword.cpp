#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float setdisplay(float r = 10.5) = 0;
    virtual float getdisplay() = 0;
};
class Circle : public Shape
{
public:
    float ans;
    float setdisplay(float r = 10.5) override
    {
        ans = 3.14 * r * r;
    }
    float getdisplay() override
    {
        return ans;
    }
};
int main()
{
    Shape *s = new Circle();
    s->setdisplay();
    cout << "Circle of Area :- " << s->getdisplay();

    return 0;
}