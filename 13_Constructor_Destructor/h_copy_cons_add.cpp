#include <iostream>
using namespace std;

class Calc
{
    int a, b;

public:
    Calc(int x, int y)
    {
        a = x;
        b = y;
    }
    Calc(const Calc &i)
    {
        a = i.a;
        b = i.b;
    }
    void display()
    {
        cout << "The sum is =" << a + b << endl;
    }
};

int main()
{
    Calc c1(13, 45);
    Calc c2 = c1;
    c2.display();
    return 0;
}