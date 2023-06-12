#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int down,height;
    double area;
    cin >> down >>height;
    area= 0.5*down*height;
    cout << fixed << setprecision(1) << area <<"\n";
}