/* Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
Include the relevant data members and functions in all the classes. Find the area of each
shape and display it. */

#include <iostream>

using namespace std;

class shape
{
    public:
        int r, base, h, l, b;
};


class Circle : public shape
{
    public:
        float area1;

        void area()
        {
            cout << "CIRCLE:" << endl << endl;
            cout << "Enter the radius:" << endl;
            cin >> r;
            area1 = 3.14*r*r;
            cout << endl << "Area of circle = " << area1;   
        }
};


class Triangle : public shape
{
    public:
        float area2;

        void area()
        {
            cout << endl << endl << "TRIANGLE:" << endl << endl;
            cout << "Enter base:" << endl;
            cin >> base;
            cout << "Enter height:" << endl;
            cin >> h;

            area2 = 0.5*base*h;

            cout << endl << "Area of Triangle = " << area2;
        }
};


class Rectangle : public shape
{
    public:
        float area3;
    
        void area()
        {
            cout << endl << endl << "RECTANGLE:" << endl << endl;
            cout << "Enter length:" << endl;
            cin >> l;
            cout << "Enter breadth:" << endl;
            cin >> b;

            area3 = l*b;

            cout << endl << "Area of Rectangle = " << area3;
        }
};


int main()
{
    shape s;
    Circle c;
    Triangle t;
    Rectangle r;

    c.area();
    t.area();
    r.area();

    return 0;
}