#include <iostream>

using namespace std;

int main() {
    char arr[] = "0123456789ABCDEF";
    char hex[16];
    int i = 0;
    int num = 0;

    cin >> num;

    while (num) {
        hex[i++] = arr[num % 16];
        num = num / 16;
    }

    for (int j = i - 1; j >= 0; --j)
        cout << hex[j];

    cout << endl;

    return 0;
}
