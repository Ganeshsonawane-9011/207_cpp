#include<iostream.h>
#include<conio.h>

class base
{
	public:
		virtual void show();

};

class derived:public base
{
	public:
		void show();
};

void base::show()
{
	cout<<"Base class function called"<<endl;
}

void derived::show()
{
	cout<<"Derived class function called"<<endl;
}

void main()
{
	clrscr();
    base *ptr;
	base b;
	derived d;

	ptr=&b;
	ptr->show();


	ptr=&d;
	ptr->show();

	getch();
}
