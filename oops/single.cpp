#include <iostream>
using namespace std;
class base
{
public:
    int age;
    void checkAge()
    {
        cout << "Enter the Age :- ";
        cin >> age;
        if (age >= 18)
        {
            cout << "You can vote ..!" << endl;
        }
        else
        {
            cout << "You Can not vote ..!" << endl;
        }
    }
};
class derived : public base
{
public:
    int a, b;
    void sum()
    {
        cout << "Enter A :- ";
        cin >> a;
        cout << "Enter B :- ";
        cin >> b;
        cout << "Ans :- " << a + b;
    }
};
int main()
{
    derived d;
    d.checkAge();
    d.sum();
    return 0;
}