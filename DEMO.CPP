#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x;
	public:
		demo() //default
		{
			cout<<"\tthe constructor with no parameter";
		}
		demo(int a) //parameterized
		{
			x=a;
			cout<<"\n\t constructor with one parameter x="<<x;
			cout<<"\n\t square of x is"<<x*x;
		}
		demo(int a,int b) //parameterized
		{
			cout<<"\n\t constructor with two parameters a="<<a<<"b="<<b;
			cout<<"\n\t addition is a+b="<<a+b;
		}
		demo(int a,int b,int c) //parametrized
		{
			cout<<"\n\t constructor with three parameters a="<<a<<"b="<<b<<"c="<<c;
			cout<<"\n\t addtion is a+b+c="<<a+b+c;
		}
		demo(demo &d) //copy
		{
			cout<<"\n\t copy of constructor is x=d.x="<<d.x;
			x=d.x;
			cout<<"\n\t the copied constructor is"<<x;
		}
};
void main()
{
	clrscr();
	demo d1;
	demo d2(10);
	demo d3(20,30);
	demo d4(20,30,40);
	demo d5(d2);
	getch();
}