#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int rollno;
	char name[40];
	public:
	void getdata()
	{
	cout<<"enter roll no:";
	cin>>rollno;
	cout<<"enter name:";
	cin>>name;
	}
	void putdata()
	{
	cout<<"\n rollno:"<<rollno;
	cout<<"\n name:"<<name;
	}
};
class marks: public student
	{
	private:
	int m1,m2,m3;
	public:
	void getmarks()
	{
	cout<<"enter 3 subject marks:";
	cin>>m1>>m2>>m3;
	}
	void putmarks()
	{
	cout<<"\nm1="<<m1;
	cout<<"\nm2="<<m2;
	cout<<"\nm3="<<m3;
	}
};
void main()
{        clrscr();
	marks obj1;
	obj1.getdata();
	obj1.getmarks();
	obj1.putdata();
	obj1.putmarks();
	getch();
}
