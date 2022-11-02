#include <iostream>
using namespace std;

class complex
{
	public:
	int x,y;
	
	complex() //default constructor
	{
		x=7;
		y=3;
	}
	complex(int a,int b) //parameterized constructor
	{
		x=a;
		y=b;
	}
	complex(complex &c) //copy constructor
	{
		x=c.x;
		y=c.y;
	}
	~complex()
	{
		cout<<"Destructor called!"<<endl;
	}
	void op(void)
	{
		if(y>0)
			cout<<"The number is: "<<x<<"+"<<y<<"i"<<endl;
		else
			cout<<"The number is: "<<x<<y<<"i"<<endl;
	}
};
int main()
{
	complex c1;
	cout<<"Using default constructor:\n";
	c1.op();
	int x,y;
	cout<<"Enter the real part:";
	cin>>x;
	cout<<"Enter the imaginary part:";
	cin>>y;
	complex c2(x,y);
	cout<<"Using parameterized constructor:\n";
	c2.op();
	complex c3(c2);
	cout<<"Using copy constructor:\n";
	c3.op();
	
	return 0;
}
