/* WAP which displays a given character, n number of times, using a function. When the n
value is not provided, it should print the given character 80 times. When both the
character and n value is not provided, it should print ‘*’ character 80 times.
using default arguments */

#include <iostream>

using namespace std;

class charprint 
{
    public:
        void print (char c = '*', int n = 80)
        {
            int i;

            for (i = 0; i < n; i++)
            {
                cout << c;
            }
        }
};

int main()
{
    charprint s;

    char c1,c2;
    int n;

    cout << "Taking both character and frequency as input:" << endl << endl;
    cout << "Enter the character:" << endl;
    cin >> c1;
    cout << "Enter the frequency:" << endl;
    cin >> n;
    cout << "Output - 1:" << endl;
    s.print(c1, n);

    cout << endl << endl;

    cout << "Taking only character as input:" << endl << endl;
    cout << "Enter the character:" << endl;
    cin >> c2;
    cout << "Output - 2:" << endl;
    s.print(c2);

    cout << endl << endl;

    cout << "Taking nothing as input:" << endl << endl;
    cout << "Output - 3:" << endl;
    s.print();


    return 0;
}