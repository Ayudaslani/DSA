#include <iostream>
using namespace std;

class Student
{

public:
    int rollno, age;
    string name;

    void display()
    {
        cout << "Rollno :- " << rollno << endl;
        cout << "name :- " << name << endl;
        cout << "age :- " << age << endl;
        cout << "............................." << endl;
    }
};

int main()
{
    Student s1[3];
    s1[0].rollno = 101;
    s1[0].name = "Ayushi";
    s1[0].age = 20;

    s1[1].rollno = 102;
    s1[1].name = "mihir";
    s1[1].age = 21;

    s1[2].rollno = 103;
    s1[2].name = "xyz";
    s1[2].age = 22;

    s1[0].display();
    s1[1].display();
    s1[2].display();
}