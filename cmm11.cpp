#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int ten = 0, five = 0;
    cin >> num;

    while (num >= 10) {
        num = num - 10;
        ten = ten + 1;
    }

    while (num >= 5) {
        num = num - 5;
        five = five + 1;
    }

    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << num << endl;

    return 0;
}