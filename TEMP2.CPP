#include<iostream.h>
#include<conio.h>
template <class t1>
void disp(t1 a[])
{
cout<<"\n Enter array elements:";
for(int i=4;i>=0;i--)
cout<<a[i]<<" ";
}
int main()
{
int a[5];
char b[5][10];
clrscr();
cout<<"Enter int array element";
for(int i=0;i<5;i++)
cin>>a[i];
disp(a);
cout<<"\n Enter char array element";
for(i=0;i<5;i++)
cin>>b[i];
disp(b);
getch();
}