#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;
    static void Increment()
    {
        count++;
        cout << "Counter :-" << count << endl;
    }
};
int Counter::count = 0;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        Counter::Increment();
    }

    return 0;
}