#include <iostream>
using namespace std;
class A
{
public:
    void add(int a, int b)
    {
        cout << "Sum of Two Numbers is :- " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Sum of three number is :- " << a + b + c << endl;
    }
    void add(double a, double b)
    {
        cout << "Sum of Two Double Numbers is :- " << a + b << endl;
    }
};
int main()
{
    A a;
    a.add(10, 2);
    a.add(1, 2, 3);
    a.add(10.4, 22.22);
    return 0;
}
