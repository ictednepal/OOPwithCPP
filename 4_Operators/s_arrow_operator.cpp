// -> arrow operator in class
#include <iostream>
using namespace std;

// Creating a class
class Student
{
private:
    // Declared private members
    int total_marks;
    float total_percentage;

public:
    // Method to calculate the percentage of marks
    void percentage(int total_marks)
    {
        this->total_marks = total_marks;
        total_percentage = (total_marks * 100) / 500;
    }
    // Method to print total percentage
    void print()
    {
        cout << "Total percentage of the Student: " << endl;
        cout << total_percentage << "%";
    }
};

// Driver code
int main()
{
    // allocating memory to the object of the class
    Student *s = new Student();

    // accessing member functions of the class
    s->percentage(489);
    s->print();
    return 0;
}
