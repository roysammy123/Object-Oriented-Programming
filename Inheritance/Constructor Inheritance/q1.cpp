/* WAP to demonstrate the order of call of constructors and destructors in case of multiple
inheritance */

#include <iostream>

using namespace std;

class A
{
    public:
        int a;

        A()
        {
            cout << "Constructor invoked: Class A" << endl;
            cout << "Enter a number:" << endl;
            cin >> a;
        }

        ~A()
        {
            cout << "Destructor invoked: Class A" << endl;
        }
};

class B
{
    public:
        int b;

        B()
        {
            cout << "Constructor invoked: Class B" << endl;
            cout << "Enter a number:" << endl;
            cin >> b;
        }

        ~B()
        {
            cout << "Destructor invoked: Class B" << endl;
        }
};

class C: public A, public B
{
    public:
        int c;

        C()
        {
            cout << "Constructor invoked: Class C" << endl;
            cout << "Enter a number:" << endl;
            cin >> c;
        }

        ~C()
        {
            cout << "Destructor invoked: Class C" << endl;
        }
};


int main()
{
    C obj;

    return 0;
}
