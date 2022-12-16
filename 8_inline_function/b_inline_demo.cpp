#include <iostream>
using namespace std;

inline int displaynum(int a){
    return a;
}

int main()
{
    cout << "The number is " << displaynum(5) << endl;
    cout << "The number is " << displaynum(66) << endl;
    cout << "The number is " << displaynum(768) << endl;
    cout << "The number is " << displaynum(4464) << endl;
    return 0;
}