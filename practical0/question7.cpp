// Array ghi Opeartions
#include <iostream>
using namespace std;

int main() {
    int kuenzang_marks[5] = {85, 72, 90, 65, 78};
    int sum = 0, highest = kuenzang_marks[0], lowest = kuenzang_marks[0];

    for (int i = 0; i < 5; i++) {
        cout << "[" << i << "] " << kuenzang_marks[i] << " ";
        for (int j = 0; j < kuenzang_marks[i] / 10; j++)
            cout << "*";
        cout << endl;

        sum += kuenzang_marks[i];

        if (kuenzang_marks[i] > highest)
            highest = kuenzang_marks[i];

        if (kuenzang_marks[i] < lowest)
            lowest = kuenzang_marks[i];
    }

    float avg = sum / 5.0;
    int count = 0;

    for (int i = 0; i < 5; i++)
        if (kuenzang_marks[i] > avg)
            count++;

    cout << "Highest : " << highest << endl;
    cout << "Lowest : " << lowest << endl;
    cout << "Average : " << avg << endl;
    cout << "Above Average: " << count << endl;

    return 0;
}