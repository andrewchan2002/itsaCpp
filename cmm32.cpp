#include <iostream>

using namespace std;

int main() {
    int num = 0, one = 0, ten = 0, hundred = 0, check = 0;

    cin >> num;

    hundred = num / 100;
    ten = (num % 100) / 10;
    one = num % 10;
    check = (hundred * hundred * hundred) + (ten * ten * ten) + (one * one * one);

    if (check == num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
