#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student() //default constructor
    {
        roll = 56;
        name = "Ram";
    }
    void display()
    {
        cout << "Roll = " << roll << endl;
        cout << "Name = " << name;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}