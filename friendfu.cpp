#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int a;
	public:
		friend void get(demo s);
		void show();
};

void get(demo s)
{
	cout<<"enter value of a:->";
	cin>>s.a;
	cout<<"value of a is:->"<<s.a<<endl;
}

void main()
{
	clrscr();

	demo d;

	get(d);

	getch();
}
