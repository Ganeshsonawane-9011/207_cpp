// program to demonstrate single inheritance
#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
		char name[20];
	public:
		void getinfo();
		void show();

};
class mark:public student
{
	private:
		int m1,m2,m3;
	public:
		void getdata();
		void display();


};
void student::getinfo()
{
	cout<<"Enter student roll number....:->"<<endl;
	cin>>rollno;
	cout<<"Enter student name..:->"<<endl;
	cin>>name;
}
void mark::getdata()
{
	cout<<"Enter marks of three subjects....:->"<<endl;
	cout<<"Enter marks of first subject...:->" <<endl;
	cin>>m1;

	cout<<"Enter Marks of second subject...:->"<<endl;
	cin>>m2;

	cout<<"Enter marks of third subject...:->"<<endl;
	cin>>m3;
}
void student::show()
{
	cout<<"\nStudent roll no. is..:->"<<rollno<<endl;
	cout<<"\nStudent name is..:->"<<name<<endl;
}
void mark::display()
{
	cout<<"The marks three subject is...:->"<<endl;
	cout<<"The first subject Marks is..:->"<<m1<<endl;
	cout<<"The second subject Marks is...:->"<<m2<<endl;
	cout<<"The third subject Marks is...:->"<<m3<<endl;
}
void main()
{
	clrscr();
	mark m;
	m.getinfo();
	m.getdata();
	m.show();
	m.display();
	getch();
}