#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << "This might be a leap year." << endl;
    } else {
        cout << "This is not a leap year." << endl;
    }
    return 0;
}

