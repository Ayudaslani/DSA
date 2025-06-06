#include <iostream>
using namespace std;

class Employee
{
public:
    int id, age, salary;
    string name;

    void display()
    {
        cout << id << name << age << salary << endl;
    }
};

int main()
{
    int n, id, age, salary;
    string name;

    cout << "How many Record Inserted you want :-";
    cin >> n;

    cout << "ID            Name            Age           Salary           " << endl;
    Employee ep[n];

    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter theid :- ";
        cin >> id;

        cout << "Enter the name :- ";
        cin >> name;

        cout << "Enter the age :- ";
        cin >> age;

        cout << "Enter the salary :- ";
        cin >> salary;
    }

    for (int i = 0; i < n; i++)
    {
        ep[i].id = id;
        ep[i].name = name;
        ep[i].age = age;
        ep[i].salary = salary;
        ep[i].display();
    }
}
