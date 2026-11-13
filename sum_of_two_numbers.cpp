#include <iostream>
using namespace std;
int main()
{
    // 1. Screen par message print karna
    cout << "Assalam-o-Alaikum! Yeh aik basic C++ program hai." << endl;
    // 2. Do numbers ko add karna
    int num1, num2, sum;
    cout << "Pehla number enter karein: ";
    cin >> num1;
    cout << "Doosra number enter karein: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Dono numbers ka majmooa (Sum) hai: " << sum << endl;
    return 0;
}
