#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    cout << "Display All value :-" << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    nums.pop_back();

    cout << "Display All value :-" << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    cout << "Return Element two number index :- " << nums.at(2) << endl;

    cout << "First Element :- " << nums.front() << endl;
    cout << "last Element :- " << nums.back() << endl;

    nums.insert(nums.begin() + 2, 10);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    nums.clear();
    cout << "Clear all element" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    if (nums.empty())
    {
        cout << "Empty !!!" << endl;
    }
    else
    {
        cout << "Not a Empty !!" << endl;
    }

    return 0;
}