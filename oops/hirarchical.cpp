#include <iostream>
using namespace std;

class A
{
public:
    int age;
};
class B : public A
{
public:
    void print()
    {
        cout << "Enter the Age :-";
        cin >> age;
        cout << "Your Age :- " << age << endl;
    }
};
class C : public A
{
public:
    void checkage()
    {
        B b;
        b.print();
        if (age >= 18)
        {
            cout << "You can vote ..";
        }
        else
        {
            cout << "you can't vote ..";
        }
    }
};

int main()
{
    C c;
    c.checkage();

    return 0;
}