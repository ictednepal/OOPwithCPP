#include <iostream>
using namespace std;

class Citizen
{
public:
    void input()
    {
    ineligible:
        cout << "You are ineligible to get a voter ID";
        
        int age;
        cout << "Enter your age :";
        cin >> age;

        if (age < 18)
        {
            goto ineligible;
        }
        else
        {
            cout << "You are eligible to get a voter ID";
        }
    }
};
int main()
{
    Citizen c1;
    c1.input();
    return 0;
}