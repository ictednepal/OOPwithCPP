#include <iostream>
using namespace std;

class Break_demo
{
public:
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i == 4)
            {
                break;
            }
            cout << i << endl;
        }
    }
};

int main()
{
    Break_demo bd1;
    bd1.output();
    return 0;
}