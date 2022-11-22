#include <iostream>
using namespace std;

class Student
{
    double eng, maths, nep, comp, sci, total, per;

public:
    void input()
    {
        cout << "Enter marks in English:";
        cin >> eng;
        cout << "Enter marks in Maths:";
        cin >> maths;
        cout << "Enter marks in Nepali:";
        cin >> nep;
        cout << "Enter marks in Computer:";
        cin >> comp;
        cout << "Enter marks in Science:";
        cin >> sci;
    }
    void tobtained()
    {
        cout << "The total marks is = " << eng + maths + nep + comp + sci <<endl;
    }
    void grade()
    {
        total = eng + maths + nep + comp + sci;
        per = total / 5;
        cout << "Your grade is ";
        if (per >= 90)
        {
            cout << "A+";
        }
        else if (per >= 80)
        {
            cout << "A";
        }
        else if (per >= 70)
        {
            cout << "B+";
        }
        else if (per >= 60)
        {
            cout << "B";
        }
        else if (per >= 50)
        {
            cout << "C+";
        }
        else if (per >= 40)
        {
            cout << "C";
        }
        else if (per < 40)
        {
            cout << "Failed";
        }
        else
        {
            cout << "Invalid input";
        }
    }
};

int main()
{
    Student s1;
    s1.input();
    s1.tobtained();
    s1.grade();
    return 0;
}