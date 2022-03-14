#include<iostream.h>
#include<conio.h>
class palindrome
{
	int n,m,p,sum;
	public:
		void get()
		{
		  cout<<"\nenter the number:";
		  cin>>n;
		  p=n;
		}
		void cal()
		{
		int sum=0;
		while(n>0)
		{
		m=n%10;
		sum=sum*10+m;
		n=n/10;
		}
		if(p==sum)
		{
			cout<<"the no. is palindrome:";

		}
		else

		{
			cout<<"the no. is not palindrome:";
		}
	}
};
void main()
{
clrscr();
palindrome f1;
f1.get();
f1.cal();
getch();
}