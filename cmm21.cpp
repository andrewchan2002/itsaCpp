#include <iostream>

using namespace std;

int main() {
    int num;
    long factorial = 1;

    cin >> num;

    if (num == 0)
        cout << "1" << endl;
    else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << factorial << endl;
    }

    return 0;
}
