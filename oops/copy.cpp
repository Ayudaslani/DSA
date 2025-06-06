#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    Student(int age)
    {
        this->age = age;
    }
    Student(Student &s)
    {

        this->age = s.age;
    }
    void display()
    {
        cout << "Your age :- " << this->age;
    }
};
int main()
{
    Student s1(19);
    s1.display();

    return 0;
}