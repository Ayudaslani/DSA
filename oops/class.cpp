#include <iostream>
using namespace std;

class Car
{
public:
    void getdetails()
    {
        cout << "The car startd.." << endl;
    }
};
main()
{
    Car mycar;
    mycar.getdetails();

    return 0;
}
