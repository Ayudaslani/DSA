#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of Two Numbers: " << add<int>(2, 9) << endl;
    cout << "Sum of two number :-" << add<double>(22.5, 66.8) << endl;
    return 0;
}