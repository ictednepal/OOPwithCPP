#include <iostream>
using namespace std;

class Triangle{
    int a, b, c;
    public:
    void input()
    {
        cout << "Enter side a:";
        cin >> a;
        cout << "Enter side b:";
        cin >> b;
        cout << "Enter side c:";
        cin >> c;

    }
    void output()
    {
        if(a==b && a==c){
            cout << "The triangle is a equilateral triangle.";
        }
        else if(a==b || a==c || b==c){
            cout << "The triangle is an isosceles triangle.";
        }
        else{
            cout << "The triangle is a scalene triangle.";
        }
    }
};

int main()
{
    Triangle t1;
    t1.input();
    t1.output();
    return 0;
}