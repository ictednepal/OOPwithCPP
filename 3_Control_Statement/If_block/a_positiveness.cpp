#include <iostream>
using namespace std;

class Num
{
    int a;

public:
    void input()
    {
        cout << "Enter a number:";
        cin >> a;
    }
    void output()
    {
        if (a > 0)
        {
            cout << "The number is positive";
        }
    }
};

int main()
{
    Num n1;
    n1.input();
    n1.output();
    return 0;
}