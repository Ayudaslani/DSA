#include <iostream>
using namespace std;
main()
{
    int a = 10;
    float b = 55.55;
    char c = 'A';
    double d = 777.999;

    cout << "Int Size :- " << sizeof(a) << "  Bytes " << endl;
    cout << "Float Size :- " << sizeof(b) << "  Bytes " << endl;
    cout << "Char Size :- " << sizeof(c) << "  Bytes " << endl;
    cout << "Double Size :- " << sizeof(d) << "  Bytes " << endl;
    cout << endl;
    cout << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "find Dynamic size of array  :- " << size;
}