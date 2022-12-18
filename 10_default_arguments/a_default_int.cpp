#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    // statement 1
    cout << sum(12, 34) << endl;

    // statement 2
    cout << sum(12, 34, 345) << endl;

    // statement 3
    cout << sum(12, 34, 67, 89);
    return 0;
}
/* Here above,
In statement 1, only 2 values are passed, so variables c and d receive the default value of 0.
In statement 2, 3 values are passed, so the value of variable c is changed to 345.
In statement 3, four values are passed in, so the values of c and d are replaced with 67 and 89 respectively.
So, we don't have to write 3 sum functions; there is only one function that works using default values for the 3rd and 4th arguments.
 */