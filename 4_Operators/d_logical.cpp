#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;

    // == (equal to operator)
    // if (a == b)
    // {
    //     cout << "The numbers are equal." << endl;
    // }
    // else
    // {
    //     cout << "Numbers are different." << endl;
    // }

    // != (not equal to operator)
    // if (a != b)
    // {
    //     cout << "Different numbers." << endl;
    // }
    // else
    // {
    //     cout << "Same numbers." << endl;
    // }

    // > (is greater than operator)
    // if (a > b)
    // {
    //     cout << a << " is the larger number" << endl;
    // }
    // else
    // {
    //     cout << b << " is the larger number" << endl;
    // }

    // < (is smaller than operator)
    // if (a < b)
    // {
    //     cout << a << " is the smaller number." << endl;
    // }
    // else
    // {
    //     cout << b << " is the smaller number." << endl;
    // }

    // >= (is greater than or equals to operator)
    // if (a >= b)
    // {
    //     cout << a << " is larger than or equals to the number " << b << endl;
    // }
    // else
    // {
    //     cout << a << " is smaller than " << b << endl;
    // }

    // <= (is smaller than or equals to operator)
    if (a <= b)
    {
        cout << a << " is smaller than or equals to the number " << b << endl;
    }
    else
    {
        cout << a << " is larger than " << b << endl;
    }

    return 0;
}