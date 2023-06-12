#include <iostream>
using namespace std;
int main() {
    int n, i, check = 0;
    cin >> n;
    if (n == 0 || n == 1)
        check = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }
    if (check == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
