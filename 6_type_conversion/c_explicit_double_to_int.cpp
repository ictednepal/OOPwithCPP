//explicit type conversion (type casting) : int to double (widening)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 56.78;

    // c style
    int num_int = (int)num_double;

    // function notation
    int num_int1 = int(num_double);

    cout << "The given double value is = " << num_double << endl;
    cout << "C style integer type casting =" << num_int << endl;
    cout << "Interger type casting using function notation =" << num_int1 << endl;

    return 0;
}