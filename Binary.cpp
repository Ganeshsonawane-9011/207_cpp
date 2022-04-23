#include<iostream.h>
#include<conio.h>
class complex
{
	int real,imag;
	public:
	void getdata()
	    {
	     cout<<"\n enter real & imag no.";
	     cin>>real>>imag;
	    }
	void putdata()
	    {
	     cout<<" "<<real<<"+i:"<<imag;
	    }
	complex operator+(complex a1)
	   {
		complex temp;
		temp.real=real+a1.real;
		temp.imag=imag+a1.imag;
		return temp;
	   }
};
void main()
{
clrscr();
complex c1,c2,c3;
c1.getdata();
cout<<"\nc1";
c1.putdata();
c2.getdata();
cout<<"\nc2";
c2.putdata();
c3=c1+c2;
cout<<"\nc1+c2";
c3.putdata();
getch();
}
