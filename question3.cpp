// String ghi Manupulation
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string name = "Kuenzang Rabten";

    cout << "Full Name : " << name << endl;
    cout << "Total Length : " << name.length() << endl;

    string upper = name;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase : " << upper << endl;

    string lower = name;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "Lowercase : " << lower << endl;

    cout << "Initials : " << name[0] << "." << name[name.find(" ") + 1] << "." << endl;

    cout << "First Name Len : " << name.substr(0, name.find(" ")).length() << endl;

    return 0;
}