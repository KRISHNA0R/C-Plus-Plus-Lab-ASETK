#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void perimeter()
    {
        cout << "Rectangle Perimeter = " << 2 * (length + width) << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle Destructor Called" << endl;
    }
};

class Circle
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void perimeter()
    {
        cout << "Circle Perimeter = " << 2 * 3.14 * radius << endl;
    }

    ~Circle()
    {
        cout << "Circle Destructor Called" << endl;
    }
};

int main()
{
    float l, w, r;

    cout << "Enter length and width: ";
    cin >> l >> w;

    cout << "Enter radius: ";
    cin >> r;

    Rectangle rectangle(l, w);
    Circle circle(r);

    rectangle.perimeter();
    circle.perimeter();

    return 0;
}
