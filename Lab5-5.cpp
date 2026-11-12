#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << "This is a positive number." << endl;
    } else {
        cout << "This is not a positive number." << endl;
    }
    return 0;
}

