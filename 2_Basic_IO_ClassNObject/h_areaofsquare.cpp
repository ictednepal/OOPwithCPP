#include <iostream>
using namespace std;

class Square
{
    int l;

public:
    void enterlength()
    {
        cout << "Enter length :";
        cin >> l;
    }
    void displayarea()
    {
        cout << "The area =" << l * l;
    }
};

int main()
{
    Square s1;
    s1.enterlength();
    s1.displayarea();
    return 0;
}