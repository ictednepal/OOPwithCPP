#include <iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    void input()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin >> b;
    }
    void add()
    {
        cout << "The sum =" << a + b << endl;
    }
    void diff()
    {
        cout << "The difference =" << a - b << endl;
    }
    void pro()
    {
        cout << "The product =" << a * b << endl;
    }
    void div()
    {
        cout << "The division =" << a / b;
        // cout << "The division =" << (float)a / (float)b;
    }
};

int main()
{
    Calculator c1;
    c1.input();
    c1.add();
    c1.diff();
    c1.pro();
    c1.div();
    return 0;
}