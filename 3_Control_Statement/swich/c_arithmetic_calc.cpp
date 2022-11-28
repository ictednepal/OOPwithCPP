#include <iostream>
using namespace std;

class Calc
{
    int a, b;
    char optr;

public:
    void input()
    {
        cout << "Enter a :";
        cin >> a;
        cout << "Enter b :";
        cin >> b;
        cout << "Enter a symbol (+,-,*,/) for the operation :";
        cin >> optr;
    }
    void output()
    {
        switch (optr)
        {
        case '+':
            cout << "The sum is = " << (a + b);
            break;
        case '-':
            cout << "The difference is = " << (a - b);
            break;
        case '*':
            cout << "The product is = " << (a * b);
            break;
        case '/':
            cout << "The quotient is = " << ((float)a / (float)b);
            break;

        default:
            cout << "Invalid input";
            break;
        }
    }
};

int main()
{
    Calc c1;
    c1.input();
    c1.output();
    return 0;
}
