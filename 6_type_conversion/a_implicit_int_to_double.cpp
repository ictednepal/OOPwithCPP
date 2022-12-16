//implicit type conversion : int to double (widening)
#include <iostream>
using namespace std;

int main()
{
    int num_int = 45;
    double num_double = (double)num_int;
    cout << "The value of double is =" << num_double;
    return 0;
}