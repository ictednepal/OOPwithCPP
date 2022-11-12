#include <iostream>
using namespace std;

class Student
{ // class name declaration
public:
    string name = "Hello Nepal"; // variable with value
};

int main()
{
    Student s1; // creating an object
    cout << s1.name;
    return 0;
}