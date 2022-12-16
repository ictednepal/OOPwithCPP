// function overloading using different daty types
#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "The sum = ";
    return (a + b);
}
float add(float a, float b)
{
    cout << "The sum = ";
    return (a + b);
}

int main()
{
    int a = 6, b = 89;
    cout << add(a, b) << endl;
    float c = 6.67, d = 89.88;
    cout << add(c, d) << endl;
    return 0;
}