#include <iostream>
using namespace std;

int main()
{
    // initializing integer pointer
    int *pointInt;

    // initializing float pointer
    float *pointFloat;

    // allocating dynamic memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value
    *pointInt = 55;
    *pointFloat = 67.89f;

    // printing
    cout << "Integer value = " << *pointInt << endl;
    cout << "Float value = " << *pointFloat << endl;

    // freeing memory allocation
    delete pointInt;
    delete pointFloat;

    return 0;
}