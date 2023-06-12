#include <iostream>
using namespace std;
int main() {
    int x, y, num;

    cin >> x >> y;
    num = x;
    for (int i = 0; i < y - 1; i++) {
        x = x * num;
    }
    if (y == 0) {
        cout << "1" << endl;
    } else {
        cout << x << endl;
    }
    
    return 0;
}
