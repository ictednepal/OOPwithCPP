#include <iostream>
using namespace std;

class Mul_Table
{
    int a;

public:
    void input()
    {
        cout << "Enter a number to get its multiplication table :";
        cin >> a;
    }
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a << " x " << i << " = " << (a * i) << endl;
        }
    }
};

int main()
{
    Mul_Table mt1;
    mt1.input();
    mt1.output();
    return 0;
}