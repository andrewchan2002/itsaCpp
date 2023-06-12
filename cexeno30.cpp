#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 == 12)
    {
        if (num2 < 22)
            cout << "Sagittarius" << endl;
        else
            cout << "Capricorn" << endl;
    }
    else if (num1 == 1)
    {
        if (num2 < 20)
            cout << "Capricorn" << endl;
        else
            cout << "Aquarius" << endl;
    }
    else if (num1 == 2)
    {
        if (num2 < 19)
            cout << "Aquarius" << endl;
        else
            cout << "Pisces" << endl;
    }
    else if (num1 == 3)
    {
        if (num2 < 21)
            cout << "Pisces" << endl;
        else
            cout << "Aries" << endl;
    }
    else if (num1 == 4)
    {
        if (num2 < 20)
            cout << "Aries" << endl;
        else
            cout << "Taurus" << endl;
    }
    else if (num1 == 5)
    {
        if (num2 < 19)
            cout << "Taurus" << endl;
        else
            cout << "Gemini" << endl;
    }
    else if (num1 == 6)
    {
        if (num2 < 21)
            cout << "Gemini" << endl;
        else
            cout << "Cancer" << endl;
    }
    else if (num1 == 7)
    {
        if (num2 < 23)
            cout << "Cancer" << endl;
        else
            cout << "Leo" << endl;
    }
    else if (num1 == 8)
    {
        if (num2 < 23)
            cout << "Leo" << endl;
        else
            cout << "Virgo" << endl;
    }
    else if (num1 == 9)
    {
        if (num2 < 23)
            cout << "Virgo" << endl;
        else
            cout << "Libra" << endl;
    }
    else if (num1 == 10)
    {
        if (num2 < 23)
            cout << "Libra" << endl;
        else
            cout << "Scorpio" << endl;
    }
    else if (num1 == 11)
    {
        if (num2 < 22)
            cout << "Scorpio" << endl;
        else
            cout << "Sagittarius" << endl;
    }

    return 0;
}
