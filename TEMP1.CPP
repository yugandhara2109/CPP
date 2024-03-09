#include<iostream.h>
#include<conio.h>
template <class t1>
void min_max(t1 a,t1 b)
{
if(a>b)
cout<<"Max no="<<a;
else
cout<<"\n Max no="<<b;
if(a<b)
cout<<"Min no="<<a;
else
cout<<"\n Min no="<<b;
}
int main()
{
clrscr();
min_max(22,30);
min_max(4.5f,25.6f);
getch();
}