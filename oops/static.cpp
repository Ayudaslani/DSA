#include <iostream>
using namespace std;

class Account
{
public:
    int acno;
    string acname;
    static string bankname;

    void setdetails(int acno, string acname)
    {
        this->acno = acno;
        this->acname = acname;
    }

    void display()
    {
        cout << "Ac no :- " << acno << " Ac name :- " << acname << " bank name :- " << bankname <<endl;
    }
};
string Account::bankname = "Union Bank of india";
int main()
{
    Account ac1, ac2; // Creating two objects of class Account
    ac1.setdetails(101, "ayushi");
    ac2.setdetails(102, "priya");

    ac1.display();
    ac2.display();

    return 0;
}