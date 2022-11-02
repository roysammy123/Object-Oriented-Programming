//WAP to demonstrate the order of call of constructors and destructors for a class.
#include <iostream>
using namespace std;

int count=1;

class areaRect{
    private:
        int length, breadth;

    public:
        areaRect()
        {
            length = 4;
            breadth = 5;
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }

        areaRect(int a)
        {
            length = breadth = a;
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }

        areaRect(int a, int b)
        {
            length = a;
            breadth = b;                        
            cout << "Area: " << length*breadth << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }

        ~areaRect()
        {
            cout << "Destructor invoked..." << endl;
            cout << "Order: " << count << endl << endl;
            count++;
        }
};

int main()
{
    areaRect();
    areaRect(2,5);
    areaRect(4);

    return 0;
}