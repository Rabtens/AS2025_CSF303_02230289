// Vector & STL
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> v20240101(6);

    cout << "Enter 6 values: ";
    for (int i = 0; i < 6; i++)
        cin >> v20240101[i];

    cout << "Original : ";
    for (int v : v20240101)
        cout << v << " ";
    cout << endl;

    sort(v20240101.begin(), v20240101.end());

    cout << "Sorted : ";
    for (int v : v20240101)
        cout << v << " ";
    cout << endl;

    int sum = accumulate(v20240101.begin(), v20240101.end(), 0);
    float avg = sum / 6.0;

    cout << "Min : " << v20240101.front() << endl;
    cout << "Max : " << v20240101.back() << endl;
    cout << "Sum : " << sum << endl;
    cout << "Average : " << avg << endl;

    v20240101.erase(remove_if(v20240101.begin(), v20240101.end(),
        [avg](int x) { return x < avg; }),
        v20240101.end());

    cout << "After removing below average: ";
    for (int v : v20240101)
        cout << v << " ";

    return 0;
}