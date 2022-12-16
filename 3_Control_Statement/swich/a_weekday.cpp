#include <iostream>
using namespace std;

class Day
{
    int d;

public:
    void input()
    {
        cout << "Enter a number (1-7) to display week days :";
        cin >> d;
    }
    void output()
    {
        switch (d)
        {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;

        default:
            cout << "Invalid Input";
            break;
        }
    }
};

int main()
{
    Day d1;
    d1.input();
    d1.output();
    return 0;
}