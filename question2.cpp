// Nga ghi Student no da chikha tsi chab ni
#include <iostream>
using namespace std;

int main() {
    int studentNo = 12230289;
    int temp = studentNo;
    int sum = 0;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Student Number : " << studentNo << endl;
    cout << "Digit Sum : " << sum << endl;

    if (studentNo % 2 == 0)
        cout << "Odd / Even : Even" << endl;
    else
        cout << "Odd / Even : Odd" << endl;

    cout << "Remainder (% 7) : " << studentNo % 7 << endl;
    cout << "Multiplied by 3 : " << studentNo * 3 << endl;

    return 0;
}