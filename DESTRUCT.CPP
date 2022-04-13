#include<iostream.h>
#include<conio.h>
class demo
{
   private:
	 int x;
   public:
   demo() //Default
   {
   cout<<"\tThe Constructor with no parameter";
   }
   demo(int a) //parameterized
   {
   x=a;
   cout<<"\n\tConstructor with one parameter x="<<x;
   cout<<"n\tSquare of x is"<<x*x;
   }
   demo(demo &d) //copy
   {
   cout<<"\n\tCopy of constructor is x=d.x="<<d.x;
   x=d.x;
   cout<<"\n\tThe copied constructor is"<<x;
   }
   ~demo()
   {
   cout<<"Destructor is invoive\n";
   }
};
void main()
{
   clrscr();
   demo d1;
   demo d2(30);
   demo d5(d2);
   getch();
}