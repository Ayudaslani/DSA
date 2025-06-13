#include <iostream>
using namespace std;

class A
{
public:
    void data_a()
    {
        cout << "Class A is ..." << endl;
    }
};
class B : public A
{
public:
    void data_b()
    {
        cout << "Class B is ..." << endl;
    }
};
class C : public B
{
public:
    void data_c()
    {
        cout << "Class C is ..." << endl;
    }
};

int main()
{
    C c;
    c.data_a();
    c.data_b();
    c.data_c();

    return 0;
}