#include <iostream>
using namespace std;

class Number_Demo
{
    int b = 30;

public:
    void display()
    {
        while (b >= 1)
        {
            cout << b << endl;
            b-=2; //b=b-2;
        }
    }
};

int main()
{
    Number_Demo nd1;
    nd1.display();
    return 0;
}
