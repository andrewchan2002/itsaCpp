#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int up, down, height;
    double area;
    cin >> up >> down >> height;
    area = 0.5 * (up + down) * height;
    cout << "Trapezoid area:" << fixed << setprecision(1) << area <<"\n";
    return 0;
}