#include <iostream>
using namespace std;

class className
{
public:
    className()
    {
        cout << "Constructor called" << endl;
    }
    ~className()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    className obj1;
    int a = 5;
    if (a==1){
        className obj2;
    }
    return 0;
}