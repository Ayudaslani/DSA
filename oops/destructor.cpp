#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "construtor is call..." << endl;
    }
    ~Student()
    {
        cout << "destructor is called ..." << endl;
    }
};
int main()
{
    Student s1;
    return 0;
}