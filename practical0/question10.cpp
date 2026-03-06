// Class and OOP
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:
    Student(string n, int sn) {
        name = n;
        studentNumber = sn;
    }

    void addMark(float m) {
        marks.push_back(m);
    }

    float getAverage() {
        float sum = 0;
        for (float m : marks)
            sum += m;
        return sum / marks.size();
    }

    float getHighest() {
        float highest = marks[0];
        for (float m : marks)
            if (m > highest)
                highest = m;
        return highest;
    }

    float getLowest() {
        float lowest = marks[0];
        for (float m : marks)
            if (m < lowest)
                lowest = m;
        return lowest;
    }

    void printReport() {
        cout << "================================================" << endl;
        cout << "ACADEMIC REPORT" << endl;
        cout << "================================================" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student No : " << studentNumber << endl;
        cout << "Marks : ";
        for (float m : marks)
            cout << m << " ";
        cout << endl;
        cout << "Average : " << getAverage() << endl;
        cout << "Highest : " << getHighest() << endl;
        cout << "Lowest : " << getLowest() << endl;
        cout << "================================================" << endl;
    }
};

int main() {
    Student s("Kuenzang Rabten", 12230289);

    s.addMark(88);
    s.addMark(76);
    s.addMark(91);
    s.addMark(65);
    s.addMark(83);

    s.printReport();

    return 0;
}