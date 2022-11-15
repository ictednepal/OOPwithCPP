#include <iostream>
using namespace std;

class Room
{
    int l, b;

public:
    void input()
    {
        cout << "Enter length of the room:";
        cin >> l;
        cout << "Enter breadth of the room:";
        cin >> b;
    }
    void area()
    {
        cout << "The area of the room = " << l * b << endl;
    }
    void perimeter()
    {
        cout << "The perimeter of the room = " << 2 * (l * b);
    }
};

int main()
{
    Room r1;
    r1.input();
    r1.area();
    r1.perimeter();
    return 0;
}