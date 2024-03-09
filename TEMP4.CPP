#include<iostream.h>
#include<conio.h>
template<class t1>
void circle(t1 r)
{
t1 a= 3.14*r*r;
cout<<"\n Area of circle"<<a;
}
template<class t1>
void rect(t1 l,t1 b)
{
t1 a=l*b;
cout<<"\n Area of rectangle="<<a;
}
int main()
{
clrscr();
circle(5);
circle(3.2);
rect(4,3);
rect(5.5,2.2);
getch();
}