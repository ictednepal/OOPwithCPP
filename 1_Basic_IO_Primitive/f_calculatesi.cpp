#include <iostream>
using namespace std;
int main()
{
    double p,t,r,si;
    cout << "Enter principal amount:";
    cin >> p;
    cout << "Enter time:";
    cin >> t;
    cout << "Enter rate of interest:";
    cin >> r;
    si=(p*t*r)/100;
    cout << "Simple interest =" << si;
    return 0;
}