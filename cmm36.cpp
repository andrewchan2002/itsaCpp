#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    if (num == 3 || num == 4 || num == 5)
        cout << "Spring" << endl;
    else if (num == 6 || num == 7 || num == 8)
        cout << "Summer" << endl;
    else if (num == 9 || num == 10 || num == 11)
        cout << "Autumn" << endl;
    else if (num == 12 || num == 1 || num == 2)
        cout << "Winter" << endl;

    return 0;
}
