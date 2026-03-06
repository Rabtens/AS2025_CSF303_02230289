// Loop based Pattern Generation
#include <iostream>
using namespace std;

int main() {
    string firstName = "Kuenzang";
    string fullName = "Kuenzang Rabten";
    int studentNo = 12230289;

    int n = firstName.length();

    cout << "Name repeated (" << n << " times):" << endl;
    for (int i = 0; i < n; i++)
        cout << firstName << endl;

    cout << "\nTriangle (height = " << fullName.length() << "):" << endl;
    for (int i = 1; i <= fullName.length(); i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    int lastDigit = studentNo % 10;
    cout << "\nTimes Table for " << lastDigit << ":" << endl;
    for (int i = 1; i <= 10; i++)
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;

    return 0;
}
