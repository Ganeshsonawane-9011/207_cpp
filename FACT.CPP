#include<conio.h>
#include<iostream.h>
void main()
{

	int i,n;
	double long fact=1;
	clrscr();


	cout<<"Enter The value:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	 fact=fact*i;

	}
	cout<<"The factorial of given number is:-"<<fact;

	getch();


}