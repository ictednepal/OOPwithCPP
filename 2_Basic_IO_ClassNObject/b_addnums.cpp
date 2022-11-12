#include <iostream>
using namespace std;

class Sum{
    public:
    int a = 5, b =34;
};

int main()
{
    Sum s1;
    cout << "The sum = " << s1.a + s1.b;
    return 0;
}