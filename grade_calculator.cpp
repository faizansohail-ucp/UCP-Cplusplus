#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A." << endl;
    } else if (marks >= 80 && marks <= 89) {
        cout << "Grade: B." << endl;
    } else if (marks >= 70 && marks <= 79) {
        cout << "Grade: C." << endl;
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: D." << endl;
    } else if (marks >= 0 && marks < 60) {
        cout << "Grade: F." << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }
    return 0;
}
