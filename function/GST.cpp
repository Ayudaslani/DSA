#include <iostream>
using namespace std;

float computeTotalBill(float amount)
{
    float gst = amount * 0.18;
    float totalBill = amount + gst;
    return totalBill;
}

main()
{
    float amount;
    cout << "Enter amount: ";
    cin >> amount;

    float total = computeTotalBill(amount);
    cout << "Total bill with 18% GST: " << total << endl;
}
