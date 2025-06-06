#include <iostream>
using namespace std;

class Emp
{
private:
    int id;
    string name;

public:
    void setemp(int a, string b)
    {
        id = a;
        name = b;
    }
    void show()
    {
        cout << "ID :- " << id << endl;
        cout << "NAME:- " << name << endl;
    }
};
int main()
{
    Emp e1;
    e1.setemp(29, "ayushi");
    e1.show();
    return 0;
}