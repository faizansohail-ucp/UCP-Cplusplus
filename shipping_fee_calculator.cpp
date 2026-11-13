#include <iostream>
using namespace std;
int main()
{
    double weight;
    cout << "Enter weight: ";
    cin >> weight;
    if (weight <= 5) {
        cout << "Shipping fee: $5." << endl;
    } else if (weight > 5 && weight <= 20) {
        cout << "Shipping fee: $10." << endl;
    } else if (weight > 20) {
        cout << "Shipping fee: $20." << endl;
    }
    return 0;
}
