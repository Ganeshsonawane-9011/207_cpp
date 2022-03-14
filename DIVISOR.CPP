#include<iostream.h>
#include<conio.h>
void main()
{
	int divident,divisor,quotient,remainder;
	clrscr();

	cout<<"Enter divident:-";
	cin>>divident;
	cout<<"Enter divisor:-";
	cin>>divisor;

	quotient=divident/divisor;
	remainder=divident%divisor;

	cout<<"quotient is:-"<<quotient;
	cout<<"\nremainder is:-"<<remainder;

	getch();
}