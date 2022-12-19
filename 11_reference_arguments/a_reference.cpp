#include <iostream>
using namespace std;

int main()
{
    int a = 7;

    //ref is reference to a
    int &ref = a;
    ref = 19;
    // changing the value of a 
    cout << "The value of a = " << a << endl;
    a = 45;
    cout << "The value of ref = " << ref;
    return 0;
}