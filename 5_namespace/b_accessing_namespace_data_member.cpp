//accessing namespace data member
#include <iostream>

namespace num
{
    int a = 45;
}

int main()
{
    int a = 85;
    std::cout << "The value of a =" << a << std::endl;
    std::cout << "The value of a =" << num::a;
    return 0;
}