#include <iostream>
using namespace std;
class Salary
{
private:
    int salary;

public:
    void setsalary(int s)
    {
        salary = s;
    }
    int getdetails()
    {
        return salary;
    }
};

int main()
{
    Salary s;
    s.setsalary(50000);
    cout << "Employee Salary is :- " << s.getdetails();

    return 0;
}