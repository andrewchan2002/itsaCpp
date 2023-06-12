#include <iostream>

using namespace std;

int main() {
    int wages = 0, hour = 0;
    double ans = 0;

    cin >> hour >> wages;

    if (hour > 120) {
        hour -= 60;
        ans = wages * 60;
        hour -= 60;
        ans += wages * 60 * 1.33;
        ans += wages * hour * 1.66;
    } else if (hour > 60 && hour <= 120) {
        hour -= 60;
        ans = wages * 60;
        ans += wages * hour * 1.33;
    } else {
        ans = hour * wages;
    }

    cout << fixed;
    cout.precision(1);
    cout << ans << endl;

    return 0;
}
