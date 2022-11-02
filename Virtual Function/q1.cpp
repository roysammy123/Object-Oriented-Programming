/* Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
of each shape and display it, using virtual function. */

#include <iostream>

using namespace std;

class Shape
{
    protected:
        int r, a, b, h;

    public:
        virtual void input()
        {
            cout << "INPUT &";
        }

        virtual void show()
        {
            cout << " OUTPUT:" << endl << endl; 
        }
};


class Circle: public Shape
{
    public:
        float area;

    virtual void input()
        {
            cout << "CIRCLE INPUT:" << endl << endl;
            cout << "Enter the radius of the circle: " << endl;
            cin >> r;
        }


    virtual void show()
    {
        area = 3.14*r*r;

        cout << endl << endl << "The area of the circle is: " << area << endl;
    }
    
};


class Square: public Shape
{
    public:
        float area;

        virtual void input()
        {
            cout << endl << "SQUARE INPUT:" << endl << endl;
            cout << "Enter the edge of the square: " << endl;
            cin >> a;
        }
    


        virtual void show()
        {
            area = a*a;

            cout << endl << endl << "The area of the square is: " << area << endl;
        }
    
};


class Triangle: public Shape
{
    public:
        float area;

        virtual void input()
        {
            cout << endl << "TRIANGLE INPUT:" << endl << endl;
            cout << "Enter the base of the triangle: " << endl;
            cin >> b;
            cout << "Enter the height of the triangle: " << endl;
            cin >> h;
        }
 


        virtual void show()
        {
            area = 0.5*b*h;

            cout << endl << endl << "The area of the triangle is: " << area << endl;
        }
    
};


int main()
{
    Shape *s, t;

    s = &t;

    s -> input();
    s -> show();

    Circle c;

    s = &c;

    s -> input();
    s -> show();

    Square sq;

    s = &sq;

    s -> input();
    s -> show();

    Triangle tr;

    s = &tr;

    s -> input();
    s-> show();

    return 0;
}
