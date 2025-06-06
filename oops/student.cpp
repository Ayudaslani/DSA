#include <iostream>
using namespace std;
class Student
{
public:
    string name, age;

    void setdetails(string n, string a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
int main()
{
    Student s1;
    s1.setdetails("Rahul", "20");
    s1.display();
    return 0;
}