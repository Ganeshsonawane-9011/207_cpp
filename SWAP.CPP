#include<iostream.h>
#include<conio.h>
class swapdata
{
public:
	void swap(int x,int y)
	{
		int t;
		t=x;
		y=t;
		cout<<"\nafter swapping:\n"<<x<<y;
	}
	void swap(char x,char y)
	{
		char t;
		t=x;
		x=y;
		y=t;
		cout<<"\nafter swapping:\t"<<x<<y;
	}
};
void main()
{
	int a,b;
	char p,q;
	clrscr();
	a=6;
	b=10;
	q='m';
	p='a';
	swapdata INT;
	cout<<"\nbefore swapping:\n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
	INT.swap(a,b);
	INT.swap(p,q);
	getch();
}