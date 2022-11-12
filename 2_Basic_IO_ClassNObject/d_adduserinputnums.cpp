#include <iostream>
using namespace std;

class Sum
{
    int a, b; //member variable

public:
    void enternumber() //member function
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin >> b;
    }
    void displaysum()
    {
        cout << "The sum =" << a + b;
    }
};

int main()
{
    Sum s1;
    s1.enternumber();
    s1.displaysum();
    return 0;
}