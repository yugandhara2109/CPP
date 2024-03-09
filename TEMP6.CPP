#include<iostream.h>
#include<conio.h>
template<class t1>
void sort(t1 a[])
{
int i,pass;
t1 t;
for(pass=1;pass<5;pass++)
{
for(i=0;i<5-pass;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
cout<<"\n sorted elements:";
for(i=0;i<5;i++)
cout<<a[i];
}
int main()
{
int a[5];
float c[5];
clrscr();
cout<<"Enter int array element";
for(int i=0;i<5;i++)
cin>>a[i];
sort(a);

cout<<"\n Enter float array element";
for(int j=0;j<5;j++)
cin>>c[j];
sort(c);
getch();
}
