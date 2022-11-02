//WAP to swap two integers using pass by reference

#include<iostream>

using namespace std;

class swapclass
{
    int x,y;
    public:
        void input()
        {
            cout << "Enter the two numbers:" << endl;
            cin >> x >> y;
        }
        void swap(swapclass &s)
        {
            cout<<"The numbers before swapping is :" << endl << s.x << " " << s.y <<endl;

            int temp;

            temp = s.x;
            s.x = s.y;
            s.y = temp;

            cout << endl;

            cout<<"The numbers after swapping is :" << endl << s.x << " " << s.y <<endl;
        }
};

int main()
{
    swapclass s;

    s.input();
    
    s.swap(s);

    cout << endl;

    return 0;   
}