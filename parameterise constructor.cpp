//PROGRAM TO DEMONSTRATE CONSTRUTOR WITH PARAMETER
#include<iostream.h>
#include<conio.h>
class num
{
private:
int a,b,c;
public:
num(int k,int m,int n); //parameterized constructor 

void show()
{
cout<<"\n"<<"a="<<a<<"b="<<b<<"c="<<c;
}
};
num::num(int k,int m,int n) // parameterized constructor
{
a=k;
b=m;
c=n;
}

int main()
{
clrscr();
num z(10,11,12); // parameterized constructor
z.show();
getch();
return 0;
}
