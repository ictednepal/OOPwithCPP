#include <iostream>
using namespace std;

class Num
{
public:
    int value;
    Num(int a)
    {
        value = a;
    }
};

int main()
{
    Num a1(45);
    Num a2(3);
    Num a3(432);
    Num a4(789);
    cout << "The value is =" << a1.value << endl;
    cout << "The value is =" << a2.value << endl;
    cout << "The value is =" << a3.value << endl;
    cout << "The value is =" << a4.value << endl;
    return 0;
}