/* WAP to demonstrate the order of call of constructors and destructors in case of virtual
base class */

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

class B: virtual public A
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

class C: virtual public A
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

class D: public B, public C
{
    public:
        int d;

        D()
        {
            cout << "Constructor invoked: Class D" << endl;
            cout << "Enter a number:" << endl;
            cin >> c;
        }

        ~D()
        {
            cout << "Destructor invoked: Class D" << endl;
        }
};


int main()
{
    D obj;

    return 0;
}