#include <iostream>
using namespace std;

class Cotinue_demo
{
public:
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i == 4)
            {
                continue;
            }
            cout << i << endl;
        }
    }
};

int main()
{
    Cotinue_demo cd1;
    cd1.output();
    return 0;
}