#include<iostream.h>
#include<conio.h>
class cal
{
public:
static int add (int a, int b)
{
return a+b;
}
static int add (int a,int b, int c)
{
return a+b+c;
}
};
int main()
{
	cal c;
	cout<<c.add(10,20)<<endl;
	cout<<c.add(10,20,30)<<endl;
	return 0;
}
