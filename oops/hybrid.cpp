#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Class A ......." << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Class B ........" << endl;
    }
};
class C : public A
{
public:
    void print()
    {
        cout << "Class C ........" << endl;
    }
};
class D : public B, public C
{
public:
    void write()
    {
        cout << "Class D ......." << endl;
    }
};
int main()
{
    D d;
    d.display();
    d.write();
    d.print();
    d.B ::show();

    return 0;
}