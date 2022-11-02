// WAP to increment the value of an argument given to function

#include <iostream>

using namespace std;

class value
{
    public:
        void increment (int num, int n)
        {
            int i;
            
            for (i = 0; i < n; i++)
            {
                num++;
            }

            cout << num << endl;
        }
};

int main ()
{
    value v;

    int num, n;

    cout << "Enter the number:" << endl;
    cin >> num;

    cout << "Enter the number of times to increment: " << endl;
    cin >> n;

    cout << endl << "The number after incrementing is: " << endl;

    v.increment (num, n);

    return 0;
}