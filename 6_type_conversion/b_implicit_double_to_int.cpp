//implicit type conversion : double to int (narrowing)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 56.78;
    int num_int = num_double;
    cout << "The value of int is =" << num_int;
    return 0;
}