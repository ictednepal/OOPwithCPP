#include <iostream>
using namespace std;

class num
{
public:
    inline int add(int a, int b)
    {
        return (a + b);
    }
};

int main()
{
    num n1;
    cout << "The sum is = " << n1.add(5, 6) << endl;
    return 0;
}
