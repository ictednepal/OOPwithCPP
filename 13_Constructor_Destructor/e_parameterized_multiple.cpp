#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    Student(string stu_name)
    {
        name = stu_name;
        roll = 12;
    }
    Student(int stu_roll)
    {
        name = "Sita";
        roll = stu_roll;
    }
    Student(string stu_name, int stu_roll)
    {
        name = stu_name;
        roll = stu_roll;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll = " << roll << endl;
    }
};

int main()
{
    Student s1("Ram");
    s1.display();
    Student s2(13);
    s2.display();
    Student s3("Hari", 34);
    s3.display();
    return 0;
}