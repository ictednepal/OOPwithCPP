#include <iostream>
using namespace std;

void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 23, b = 45;
    swap(a, b);
    cout << "A = " << a << endl;
    cout << "B = " << b;
    return 0;
}