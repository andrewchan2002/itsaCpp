#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a = 0, b = 0;
    cin >> a;
    b = a * 9 / 5 + 32;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}