#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    // declaring constructor
    Student();
};

Student::Student()
{
    roll = 12;
}

int main()
{
    Student s1;
    cout << "The roll number is = " << s1.roll;
    return 0;
}