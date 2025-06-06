#include <iostream>
using namespace std;

class Student
{
private:
    int rollno, age;
    string name;

public:
    void setAge(int r, string n, int a)
    {
        rollno = r;
        name = n;
        age = a;
    }

    void getAge()
    {
        cout << "Rollno :- " << rollno << endl;
        cout << "name :- " << name << endl;
        cout << "age :- " << age << endl;
        cout << "---------------------------" << endl;
    }
};
int main()
{
    Student s1, s2, s3;
    s1.setAge(1, "Ayushi", 18);
    s2.setAge(2, "denisha", 19);
    s3.setAge(3, "purvisha", 20);

    s1.getAge();
    s2.getAge();
    s3.getAge();
}