#include <iostream>
using namespace std;

class Addition
{
public:
    int x, y;
    void setaddition(int a, int b)
    {
        x = a;
        y = b;
    }
    void getdata()
    {
        cout << "Sum of two numbers is  :- " << x + y << endl;
        cout << "sub of two numbers is  :- " << x - y << endl;
        cout << "mul of two numbers is  :- " << x * y << endl;
        cout << "div of two numbers is  :- " << x / y << endl;
        cout << "mod of two numbers is  :- " << x % y << endl;
    }
};
int main()
{

    Addition a1;
    a1.setaddition(60, 20);
    a1.getdata();
    return 0;
}