#include <iostream>
using namespace std;

void update(int *p);
main()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    update(p);
}
void update(int *p)
{

    for (int i = 0; i < 3; i++,p++)
    {
        cout << *p << " ";
    }
}