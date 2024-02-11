#include<iostream.h>
#include<conio.h>
inline int demo(int a)
{
return a*a;
}
inline int demo1(int a)
{
return a*a*a;
}
int main()
{
int a;
clrscr();
cout<<"Enter number";
cin>>a;
cout<<"square of the number="<<demo(a);
cout<<"\n cube of the number="<<demo1(a);
getch();
}