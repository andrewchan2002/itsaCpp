#include <iostream>

using namespace std;

int main() {
    int num1;
    int sum = 2;
    cin >> num1;
    
    for (int i = 1; i < num1; i++) {
        sum = sum * 2;
    }
    
    if (num1 >= 31) {
        cout << "Value of more than 31" << endl;
    } 
    else {
        cout << sum << endl;
    }
    
    return 0;
}