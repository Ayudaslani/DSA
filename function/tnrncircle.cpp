#include <iostream>
using namespace std;

void areaCircle();
main()
{
    areaCircle();
    areaCircle();
    areaCircle();
}

void areaCircle()
{
    int r;
    cout << "Enter the Radius :- ";
    cin >> r;

    float ans;
    ans = 3.14 * r * r;
    cout << "area of circle :- " << ans << endl;
}