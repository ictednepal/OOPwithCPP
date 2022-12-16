//standard namespace demo with external header file
#include <iostream>
#include "data_header.h"

int main()
{
    int a = 85;
    std::cout << "a = " << a << std::endl;
    std::cout << "a = " << num::a;
    return 0;
}