#include <iostream>
using namespace std;

int num; // global variable

int &test(); // reference function declaration

int main()
{
    test() = 57; // its like num = 57;
    cout << "num = " << num;
    return 0;
}

int &test()
{
    // returns the address of num variable
    return num;
}