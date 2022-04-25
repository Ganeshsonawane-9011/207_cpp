//program to demonstrate function template
#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T a,T b)
{
    T t;
    t=a;
    a=b;
    b=t;
    cout<<"A=:->"<<a<<endl;
    cout<<"B=:->"<<b<<endl;
}
void main()
{
clrscr();
    swap(10,20);
    cout<<endl;
    swap(1.5,5.7);
    cout<<endl;
    swap('t','r');
    getch();
}


