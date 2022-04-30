#include<iostream.h>
#include<conio.h>
class student
{
	private:
	      int m1,m2,rollno,total;
	float avg;
	char name[20];

	public:
		void get();
		void put();
};
void student::get()
{
	cout<<"\nEnter student roll number:->";
	cin>>rollno;
	cout<<"\nEnter student name:->";
	cin>>name;
	cout<<"\nEnter marks in subject:->";
	cin>>m1;
	cout<<"\nEnter marks in subject 2:->";
	cin>>m2;

}
void student::put()
{
	total=0;
	total=m1+m2;
	avg=total/2;
	cout<<"\n";
	cout<<"\n Output is:->"<<endl;
	cout<<"\ Roll Number:->             \t";
	cout<<rollno;
	cout<<"\n Name:->                   \t";
	cout<<name;
	cout<<"\n Marks is subject 1:->  \t";
	cout<<m1;
	cout<<"\n Marks is subject 2:->  \t";
	cout<<m2;
	cout<<"\n Total Marks:->         \t";
	cout<<total;
	cout<<"\n Average:->             \t";
	cout<<avg;

}
void main()
{

	clrscr();
	student s;
	s.get();
	s.put();
	getch();

}
