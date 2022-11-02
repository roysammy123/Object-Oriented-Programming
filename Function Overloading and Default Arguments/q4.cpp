//  WAP to find square and cube of a number using inline function

#include <iostream>

using namespace std;

class Mathcalc
{
    public:
       inline int square (int n)
       {
        return n*n;
       }

       inline int cube (int n)
       {
        return n*n*n;
       }
};


int  main()
{
    Mathcalc m;

    int n;

    cout << "Enter the number:" << endl;
    cin >> n;

    cout << endl;

    cout << "Square of " << n << ":" << endl << m.square(n) << endl;
    cout << "Cube of " << n << ":" << endl << m.cube(n) << endl;

    return 0;
}