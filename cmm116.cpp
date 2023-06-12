#include <iostream>
using namespace std;
int main() {
    int x, y, z, num;
    cin >> x >> y >> z;
    num = (x * 20) + (y * 25) + (z * 30);
    if (x / 3 && y / 2) {
        num -= 30;
    }
    cout << num << endl;

    return 0;
}
