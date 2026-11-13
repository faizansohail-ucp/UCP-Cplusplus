#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter numbers: ";
    cin >> num1 >> num2;
    if (num2 == 0) {
        cout << "Division by zero constraint." << endl;
        return 0;
    }
    (num1 % num2 == 0) ? cout << num1 << " is the multiple of " << num2 << endl : cout << num1 << " is not the multiple of " << num2 << endl;
    return 0;
}
