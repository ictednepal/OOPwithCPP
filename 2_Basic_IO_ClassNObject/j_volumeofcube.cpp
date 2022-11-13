#include <iostream>
#include <math.h>
using namespace std;

class Cube
{
    int l;

public:
    void input()
    {
        cout << "Enter length :";
        cin >> l;
    }
    void output()
    {
        cout << "The volume of cube is =" << pow(l,3);
    }
};

int main()
{
    Cube c1;
    c1.input();
    c1.output();
    return 0;
}