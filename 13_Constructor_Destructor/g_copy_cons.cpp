#include <iostream>
using namespace std;

class Num
{
public:
    int a;
    Num(int x)
    {
        a = x;
    }
    Num(const Num &m)
    {
        a = m.a;
    }
};

int main()
{
    Num n1(89);
    // Num n2 = n1;
    Num n2(n1);
    cout << "The value is " << n2.a << endl;
    return 0;
}