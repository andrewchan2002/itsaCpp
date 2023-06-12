#include <iostream>

using namespace std;

int main() {
    int num;
    int arr[8];

    cin >> num;

    if (num < 0) {
        num = num + 256; // Convert negative to positive
    }

    for (int i = 7; i >= 0; i--) {
        arr[i] = num % 2;
        num /= 2;
    }

    for (int i = 0; i < 8; i++) {
        cout << arr[i];
    }

    cout << endl;

    return 0;
}
