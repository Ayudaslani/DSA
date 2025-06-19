#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    Student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }
    void display()
    {
        cout << "Roll no :- " << rollno << endl;
        cout << "Name  :- " << name << endl;
    }
    ~Student()
    {
        cout << "Destructor is called....!";
    }
};
int main()
{
    Student *s = new Student(1, "Ayushi");
    s->display();
    s->~Student();
    return 0;
}