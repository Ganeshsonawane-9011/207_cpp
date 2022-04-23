#include<iostream.h>
#include<conio.h>
class stud
{
char name[20];
int prno;
public:
void get();
void put();
};
void stud::get()
{
cout<<"\n enter the name & permanent registration no:\n";
cin>>name>>prno;
}
void stud::put()
{
cout<<"\n the name and permanent reg.no is";
cout<<"\n name:"<<name<<"\t permanent reg.no:"<<prno;
}
class art:public stud
{
protected:
	int fcode;
	char sub[20];
public:
	void get1();
	void put1();
};
void art::get1()
{
get();
cout<<"\n enter the faculty code and subject name:";
cin>>fcode>>sub;
}
void art::put1()
{
put();
cout<<"\n faculty code:"<<fcode<<"\t subject name:"<<sub;
}
class medical:public stud
{
int fc;
char s1[20];
public:
  void get2();
  void put2();
};
void medical::get2()
{
get();
cout<<"\n faculty code and subject name:";
cin>>fc>>s1;
}
void medical::put2()
{
put();
cout<<"\n faculty code:"<<fc<<"\t subject name:"<<s1;
}
void main()
{
clrscr();
art a;
cout<<"\n art student";
a.get1();
a.put1();
cout<<"\n***************************\n";
medical m;
cout<<"\n medical student";
m.get2();
m.put2();
getch();
}
