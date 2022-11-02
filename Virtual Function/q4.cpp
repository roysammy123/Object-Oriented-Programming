/* WAP to demonstrate use of pure virtual function and abstract base class */

#include <iostream>

using namespace std;

class Shape
{
    protected:
        int r, a, b, h;

    public:
        virtual void input()
        {
        }

        virtual void show()
        {}
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

    return 0;
}