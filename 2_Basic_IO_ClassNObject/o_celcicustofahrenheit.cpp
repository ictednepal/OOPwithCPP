#include <iostream>
using namespace std;

class Temperature
{
    int c;

public:
    void input()
    {
        cout << "Enter temperature in celcius:";
        cin >> c;
    }
    void toFahrenheit()
    {
        cout << "The fahrenheit conversion = " << (float)(9.0 / 5.0) * c + 32.0;
    }
};

int main()
{
    Temperature t1;
    t1.input();
    t1.toFahrenheit();
    return 0;
}