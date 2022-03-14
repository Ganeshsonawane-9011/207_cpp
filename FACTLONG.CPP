#include<iostream.h>
#include<conio.h>
void main()
{
	unsigned int i,n,fact=1;
	clrscr();
	cout<<"Enter the number:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	  fact=fact*i;

	}
	cout<<"Factorial of given number is:-"<<fact;
	getch();
}