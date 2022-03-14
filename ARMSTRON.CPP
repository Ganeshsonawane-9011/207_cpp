#include<iostream.h>
#include<conio.h>
void main()
{
	int n,sum=0,a,m;
	clrscr();
	cout<<"\n enter the given number is armstrong or not \t:";
	cin>>n;
	a=n;
	while(n!=0)
	{
		m=n%10;
		sum=sum+m*m*m;
		n=n/10;
	}
	if(a==sum)
	cout<<"\n number is armstrong:\t";
	else
	cout<<"\n number is not armstrong:\t";
	getch();
}
