#include <iostream>

using namespace std;

int main() {
    int second;
    int days, hours, min;

    cin >> second;

    days = second / 86400;
    second = second - 86400 * days;
    hours = second / 3600;
    second = second - 3600 * hours;
    min = second / 60;
    second = second - min * 60;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << second << " seconds" << endl;

    return 0;
}