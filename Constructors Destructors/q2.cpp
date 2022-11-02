/* Create a class which stores time in hh:mm format. Include all the constructors. The
parameterized constructor should initialize the minute value to zero, if it is not
provided */

#include <iostream>

using namespace std;

class time
{
    int hh;
    int mm;

    public:
        time()
        {
            cout << "Default constructor called..." << endl;
            hh = 4;
            mm = 5;
        }

        time(int h, int m=0)
        {
            cout << "Parameterised constructor called..." << endl;
            hh = h;
            mm = m;
        }

        time(time &t)
        {
            cout << "Copy constructor called..." << endl;
            hh = t.hh;
            mm = t.mm;
        }

        ~ time()
        {
            cout << "Destructor called..." << endl;
        }

        void display(void)
        {
            cout << "The time is ";
            if (hh < 10)
            {
                cout << "0" << hh << ":";

                if (mm < 10)
                {
                    cout << "0" << mm << " hours" << endl << endl;
                }
                else
                {
                    cout << mm << " hours" << endl << endl;
                }
            }

            else
            {
                cout << hh << ":";

                if (mm < 10)
                {
                    cout << "0" << mm << " hours" << endl << endl;
                }
                else
                {
                    cout << mm << " hours" << endl << endl;
                }
            }
        }
};

int main()
{
    time t;
    t.display();

    time tp(4,2);
    tp.display();

    time tpn(14);
    tpn.display();

    time tc(tp);
    tc.display();

    return 0;
}