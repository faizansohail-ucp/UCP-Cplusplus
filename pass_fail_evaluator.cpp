#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    cout << "Enter marks: ";
    cin >> m1 >> m2 >> m3;
    double average = (m1 + m2 + m3) / 3.0;
    if (m1 < 33 || m2 < 33 || m3 < 33) {
        cout << "Fail due to subject score." << endl;
    } else if (average >= 40) {
        cout << "Pass." << endl;
    } else {
        cout << "Fail." << endl;
    }
    return 0;
}
