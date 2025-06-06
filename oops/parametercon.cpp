#include <iostream>
using namespace std;

class sum
{
public:
    int a, b;
    sum(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        int c = this->a + this->b;
        cout << "Ans :- " << c << endl;
    }
};
int main()
{
    sum s(5, 10);
    s.display();
    return 0;
}