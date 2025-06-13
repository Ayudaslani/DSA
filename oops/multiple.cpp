#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Class A .." << endl;
    }
};
class B
{
public:
    void dispaly()
    {
        cout << "class B.." << endl;
    }
};
class C : public A, public B
{
public:
    void show()
    {
        cout << "Class C.." << endl;
    }
};
int main()
{
    C obj;
    obj.print();
    obj.dispaly();
    obj.show();
    
    return 0;
}