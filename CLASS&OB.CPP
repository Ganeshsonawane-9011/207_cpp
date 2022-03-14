#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20];

};
	 void display()
	{
	 cout<<"Inside class";

	}
	void main()
	{
	 student s;
	 clrscr();

	 cout<<"Enter roll no:-"<<endl;
	 cin>>s.rollno;
	 cout<<"Enter name:-"<<endl;
	 cin>>s.name;

	 cout<<s.rollno<<endl;
	 cout<<s.name;
	 getch();
	}

