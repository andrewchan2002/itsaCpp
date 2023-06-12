#include <iostream>

using namespace std;

int main() {
    int x, y;
    int r = 100;
    int distance;
    
    cin >> x >> y;
    
    distance = x * x + y * y;
    
    if (distance <= (r * r)) {
        cout << "inside" << endl;
    }
    else if (distance > (r * r)) {
        cout << "outside" << endl;
    }

    return 0;
}
