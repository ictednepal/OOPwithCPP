#include <iostream>
using namespace std;

class Person{
    int age;
    public:
    void input(){
        cout << "Enter your age:";
        cin >> age;
    }
    void output(){
        cout << "You are " << age * 365 << " days old.";
    }
};

int main()
{
    Person p1;
    p1.input();
    p1.output();
    return 0;
}