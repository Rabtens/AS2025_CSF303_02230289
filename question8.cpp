// Functions
#include <iostream>
#include <algorithm>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string name = "Kuenzang Rabten";
    int studentNo = 12230289;

    cout << "digitSum : " << digitSum(studentNo) << endl;
    cout << "isPrime : " << (isPrime(studentNo) ? "Yes" : "No") << endl;
    cout << "countVowels : " << countVowels(name) << endl;
    cout << "reverseString : " << reverseString(name) << endl;

    return 0;
}