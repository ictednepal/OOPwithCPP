//nested namespace demo
#include <iostream>
using namespace std;

namespace One
{
    void func()
    {
        cout << "Inside One" << endl;
    }
    // second name space
    namespace Two
    {
        void func()
        {
            cout << "Inside Two" << endl;
        }
    }
}
using namespace One::Two;
int main()
{

    // This calls function from second name space.
    func();
    return 0;
}
