#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    void entername(){
        cout << "Enter your name: ";
        cin >> name;
    }
    void displayname(){
        cout << "Your name is " << name;
    }
};

int main()
{
    Student s1;
    s1.entername();
    s1.displayname();
    return 0;
}