#include <iostream>
using namespace std;

class Cuboid
{
    int l, b, h;

public:
    void input()
    {
        cout << "Enter length :";
        cin >> l;
        cout << "Enter breadth :";
        cin >> b;
        cout << "Enter height :";
        cin >> h;
    }
    void output()
    {
        cout << "The volume of cuboid is =" << l * b * h;
    }
};

int main()
{
    Cuboid c1;
    c1.input();
    c1.output();
    return 0;
}