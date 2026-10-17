#include <iostream>
#include <cmath>
using namespace std;

// finding whether the entered number is an armstrong or not....

int main()
{
    int num, originalnum, remainder, result = 0, count = 0;
    cout << "ENTER THE NUMBER " << endl;
    cin >> num;

    originalnum = num; // storing value of num in originalnum variable

    while (originalnum != 0)
    {
        originalnum /= 10;
        ++count;
    }

    originalnum = num;

    while (originalnum != 0)
    {
        remainder = originalnum % 10;
        result = result + pow(remainder, count);
        originalnum /= 10;
    }

    if (result == num)
    {
        cout << "THE ENTERED NUMBER IS AN ARMSTRONG" << endl;
    }

    else
    {
        cout << "THE ENTERED NUMBER IS NOT AN ARMSTRONG" << endl;
    }

    return 0;
}