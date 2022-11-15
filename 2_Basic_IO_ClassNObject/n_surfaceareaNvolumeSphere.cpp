#include <iostream>
#include <math.h>
using namespace std;

class Sphere
{
    int r;

public:
    void input()
    {
        cout << "Enter radius:";
        cin >> r;
    }
    void sarea()
    {
        cout << "The surface area of sphere =" << (float)4 * 3.14f * (pow(r, 2)) << endl;
    }
    void volume()
    {
        cout << "The volume of sphere = " << (float)(4 / 3) * 3.14f * (pow(r, 3));
    }
};

int main()
{
    Sphere s1;
    s1.input();
    s1.sarea();
    s1.volume();
    return 0;
}