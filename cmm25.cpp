#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int sum = 0;

    cin >> num;

    for (int i = 1; i < num + 1; i++) {
        if ((i % 3) == 0) {
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}
