// WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.

#include <iostream>

using namespace std;

class VolumeCalc
{
    public:
        float volume (float r)  // sphere
        {
            float area;
            area = (4/3)*3.14*r*r*r;
            return area;
        }

        float volume (float r, float h) // cylinder
        {
            int area;
            area = 3.14*r*r*h;
            return area;
        }

        float volume (float l, float w, float h)   // cuboid
        {
            float area;
            area = l*w*h;
            return area;
        }
};

int main()
{
    VolumeCalc a;

    float r1, r2, h1, h2, l, w;

    cout << "VOLUME CALCULATION:" << endl << endl;

    cout << "Sphere:" << endl << endl;
    cout << "Enter the radius of the sphere:" << endl;
    cin >> r1;
    cout << "The volume of the circle is: " << a.volume(r1) << endl << endl;

    cout << "Cylinder:" << endl << endl;
    cout << "Enter the radius of the cylinder:" << endl;
    cin >> r2;
    cout << "Enter the height of the cylinder:" << endl;
    cin >> h1;
    cout << "The volume of the cylinder is: " << a.volume(r2, h1) << endl << endl;

    cout << "Cuboid:" << endl << endl;
    cout << "Enter the length of the cuboid:" << endl;
    cin >> l;
    cout << "Enter the width of the cuboid:" << endl;
    cin >> w;
    cout << "Enter the height of the cuboid:" << endl;
    cin >> h2;
    cout << "The volume of the cuboid is: " << a.volume(l, w, h2) << endl;

    return 0;
}