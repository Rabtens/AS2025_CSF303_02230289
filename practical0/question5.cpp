// Conditional class ghi classification lo

#include <iostream>
using namespace std;

int main() {
    string name = "Kuenzang Rabten";
    int studentNo = 12230289;
    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    if (mark < 0 || mark > 100) {
        cout << "Error: Invalid mark entered." << endl;
        return 0;
    }

    string grade;

    if (mark >= 75)
        grade = "Distinction";
    else if (mark >= 60)
        grade = "Merit";
    else if (mark >= 40)
        grade = "Pass";
    else
        grade = "Fail";

    cout << "----------------------------------------" << endl;
    cout << "Student : " << name << " (" << studentNo << ")" << endl;
    cout << "Mark : " << mark << endl;
    cout << "Grade : " << grade << endl;

    if (mark >= 40)
        cout << "Result : Congratulations, you have passed." << endl;
    else
        cout << "Result : You have failed." << endl;

    cout << "----------------------------------------" << endl;

    return 0;
}