// WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading

#include <iostream>

using namespace std;

class AreaCalc
{
    public:
        float area (int r)  // circle
        {
            float area;
            area = 3.14*r*r;
            return area;
        }

        int area (int l, int b) // rectangle
        {
            int area;
            area = l*b;
            return area;
        }

        float area (float b, float h)   // triangle
        {
            float area;
            area = 0.5*b*h;
            return area;
        }
};

int main()
{
    AreaCalc a;

    int r, l, b;
    float base, h;

    cout << "AREA CALCULATION:" << endl << endl;

    cout << "Circle:" << endl << endl;
    cout << "Enter the radius of the circle:" << endl;
    cin >> r;
    cout << "The area of the circle is: " << a.area(r) << endl << endl;

    cout << "Rectangle:" << endl << endl;
    cout << "Enter the length of the rectangle:" << endl;
    cin >> l;
    cout << "Enter the breadth of the rectangle:" << endl;
    cin >> b;
    cout << "The area of the rectangle is: " << a.area(l,b) << endl << endl;

    cout << "Triangle:" << endl << endl;
    cout << "Enter the base of the triangle:" << endl;
    cin >> base;
    cout << "Enter the height of the triangle:" << endl;
    cin >> h;
    cout << "The area of the triangle is: " << a.area(base,h) << endl << endl;



    return 0;
}
