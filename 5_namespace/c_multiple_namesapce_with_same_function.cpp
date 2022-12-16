// multiple namespace with same function name and its access
#include <iostream>
using namespace std;

namespace sectionOne
{
    void func()
    {
        cout << "Hello Nepal" << endl;
    }
}

namespace sectionTwo
{
    void func()
    {
        cout << "Hello Sanothimi";
    }
}

int main()
{
    sectionOne::func();
    sectionTwo::func();
    return 0;
}