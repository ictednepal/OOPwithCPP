#include <iostream>
using namespace std;

class Alphabet
{
    char letter;

public:
    void input()
    {
        cout << "Enter a character (a-e) :";
        cin >> letter;
    }
    void output()
    {
        switch (tolower(letter))
        {
        case 'a':
            cout << "Apple";
            break;
        case 'b':
            cout << "Ball";
            break;
        case 'c':
            cout << "Cat";
            break;
        case 'd':
            cout << "Dog";
            break;
        case 'e':
            cout << "Egg";
            break;

        default:
            cout << "Invalid input";
            break;
        }
    }
};

int main()
{
    Alphabet a1;
    a1.input();
    a1.output();
    return 0;
}