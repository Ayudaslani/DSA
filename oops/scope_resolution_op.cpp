#include <iostream>
using namespace std;

class Student
{
public:
    int x;
    void sum();
    void data();
    void checkAge(int age);
};
void Student::data()
{
    x = 10;
    cout << "X value is :- " << x << endl;
}

void Student::sum()
{
    int a, b;
    cout << "Enter the a Value :- " << endl;
    cin >> a;
    cout << "Enter the b value :- " << endl;
    cin >> b;
    cout << "Ans :- " << a + b << endl;
}
void Student::checkAge(int age)
{
    if (age >= 18 && age <= 100)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You can not vote " << endl;
    }
}
int main()
{
    Student s;
    s.sum();
    s.data();
    s.checkAge(19);

    return 0;
}