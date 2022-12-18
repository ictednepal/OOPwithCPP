// by using different number of parameters
#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "The sum = " << (a + b + c) << endl;
    }
};

int main()
{
    Addition a1;
    a1.add(23, 45);
    a1.add(12, 34, 56);
    return 0;
}