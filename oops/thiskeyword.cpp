#include <iostream>
using namespace std;

class Employee
{
private:
    int id, age, salary;
    string name;

public:
    void setemp(int id, string name, int age, int salary)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void getemp()
    {
        cout << "id :- " << this->id << endl;
        cout << "name :- " << this->name << endl;
        cout << "age :- " << this->age << endl;
        cout << "salary :- " << this->salary << endl;
        cout << " -------------------------------------- " << endl;
    }
};
int main()
{

    Employee e1, e2, e3;
    e1.setemp(1, "Ayushi", 20, 10000);
    e2.setemp(2, "denisha", 21, 20000);
    e3.setemp(3, "metha", 22, 30000);
    e1.getemp();
    e2.getemp();
    e3.getemp();
}