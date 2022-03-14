//program on Demonstrate to Factorial number
#include<iostream.h>
#include<conio.h>
int main()
{
  int number,fact=1;
  cout<<"Enter the number";
  cin>>number;

  for(int i=1;i<=number;i++)
  {
    fact=fact*i;
  }
   cout<<"Factorial of given number:"<<fact<<endl;
   getch();

}