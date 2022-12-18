// by using different sequence of parameters
#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, double b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(double a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    Addition a1;
    a1.add(23, 45.67);
    a1.add(12.6575, 34);
    return 0;
}