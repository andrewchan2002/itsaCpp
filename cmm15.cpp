#include <iostream>

using namespace std;

int main() {
    int len, weight;

    cin >> len >> weight;

    if (len <= 100 && len >= 0 && weight <= 100 && weight >= 0)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;

    return 0;
}