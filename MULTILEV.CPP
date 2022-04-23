#include<iostream.h>
#include<conio.h>
int m1,m2,m3;
class student
{
	private:
		int rollno;
		char name[40];
	public:
		void getdata()
		{
			cout<<"enter rollno:";
			cin>>"rollno";
			 cout<<"enter name:";
			 cin>>"name";
		}
		void putdata()
		{
		cout<<"rollno"<< rollno;
		cout<<"name"<<name;
		}
};
class marks:public student
{

	public:
	void getmarks()
	{
	cout<<"enter 3 subject marks:";
	cin>>m1>>m2>>m3;
	}
	void putmarks()
	{
	cout<<"m1="<<m1;
	cout<<"m2="<<m2;
	cout<<"m3="<<m3;
	}
};
class result: public marks
{
	private:
	int total;
	float per;
	public:
	void cal()
	{
	total=m1+m2+m3;
	per=total/3;
	}
	void show()
	{
	cout<<"total="<<total;
	cout<<"percentage="<<per;
	}
	};
	void main()
	{
	clrscr();
	result r1;
	r1.getdata();
	r1.getmarks();
	r1.cal();
	r1.putdata();
	r1.putmarks();
	r1.show();
	getch();
	}
