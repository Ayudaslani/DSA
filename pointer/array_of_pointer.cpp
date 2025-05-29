#include <iostream>
using namespace std;

main()
{
    int a[3] = {1, 2, 3};
    int *p = a;

    for (int i = 0; i < 3; i++, p++)
    {
        cout << *p << endl;
    }

    cout << endl;
    cout << endl;
    for (int i = 0; i < 3; i++, p++)
    {
        cout << p << endl;
    }
}