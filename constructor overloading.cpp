//Program for demonstrate Constructor Overloading.
#include<iostream.h>
#include<conio.h>
class demo
{
Private:
	int x;
public:
	demo() //default constructor
	{
	cout<<"\n Constructorwith no parameter:";
	}
	demo(int a) //One argument constructor
	{
		x=a;
		cout<<"\n Constructor with one parameter"<<x;
		cout<<"\n Square of a=>"<<x*x;
	}
	demo(int a, int b) //two argument constructor

	{
	  cout<<"\n Constructor with two parameters"<<a<<" "<<b;
	  cout<<"\n Square of a+b=>"<<a+b;
	}
	demo(demo &d) //copy constructor

	{
		cout<<"\n Copy Constructor";
		x=d.x;
		cout<<"\n Copied Value=>"<<x;
	}
};

void main()
{
	clrscr();
	demo d1;		//Default Constructor
	demo d2(10);		//Constructor with 1 Parameter
	demo d3(20,30);		//Constructor with 2 Parameter
	demo d4(d2);		//Copy Constructor
	getch();
}
