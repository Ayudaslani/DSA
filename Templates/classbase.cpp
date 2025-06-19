#include <iostream>
using namespace std;
template <class T>
class Box
{
public:
    T a;
    T b;

    void setvalue(T aa, T bb)
    {
        a = aa;
        b = bb;
    }
    T getvalue()
    {
        return a + b;
    }
};
int main()
{
    Box<int> b;
    b.setvalue(10, 50);
    cout << "sum of two integer number :-" << b.getvalue()<<endl;
    
    Box<float> b1;
    b1.setvalue(10.55, 50.5);
    cout << "Sum of two Floating value :-" << b1.getvalue()<<endl;
    return 0;

}

