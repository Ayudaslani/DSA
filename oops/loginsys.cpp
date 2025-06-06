#include <iostream>
using namespace std;

class Student
{
public:
    int grid;
    string mpin, name, std, city;

    Student(int grid, string mpin, string name, string std, string city)
    {
        this->grid = grid;
        this->mpin = mpin;
        this->name = name;
        this->std = std;
        this->city = city;

        cout << "Enter the Grid :- ";
        cin >> grid;
        cout << " Enter the MPIN :- ";
        cin >> mpin;

        if (this->grid == grid && this->mpin == mpin)
        {
            cout << "Login succfully ..." << endl;
        }
        else
        {
            cout << "Try Again .. " << endl;
        }
    }
};
int main()
{
    Student s1(111, "a@123", "Ayushi", "mscIT", "surat");
    return 0;
}