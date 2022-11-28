#include <iostream>
using namespace std;

class Number_Loop
{
    int a = 1;

public:
    void display()
    {
        do
        {
            cout << a << endl;
            a++;
        } while (a <= 10);
    }
};

int main()
{
    Number_Loop nl1;
    nl1.display();
    return 0;
}