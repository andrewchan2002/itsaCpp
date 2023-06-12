#include <iostream>

using namespace std;

int checking(int);

int main(){
    int number;
    cin >> number;
    if (checking(number))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

int checking(int num){
    int i;
    if (num == 1)
    {
        return 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
