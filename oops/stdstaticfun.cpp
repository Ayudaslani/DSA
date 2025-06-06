#include <iostream>
using namespace std;

class Student
{

public:
    int roll_number;
    string name;
    int age;
    static string college_name;

    void setdetails(int roll_number, string name, int age)
    {
        this->roll_number = roll_number;
        this->name = name;
        this->age = age;
    }
    static void displaycollege()
    {
        cout << "College name :- " << college_name << endl;
    }
    void display()
    {
        cout << "Roll_number :- " << roll_number << endl;
        cout << "name :- " << name << endl;
        cout << "age :- " << age << endl;
    }
};
string Student::college_name = "S d j international College";
int main()
{
    Student s1, s2;
    s1.setdetails(1, "ayushi", 20);
    s2.setdetails(2, "denisha", 21);

    s1.display();
    Student::displaycollege();

    s2.display();
    Student::displaycollege();
    return 0;
}