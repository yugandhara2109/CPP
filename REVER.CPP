#include<iostream.h>
#include<conio.h>
int main()
{
int n,i,d,s=0;
clrscr();
cout<<"Enter number:";
cin>>n;
for(i=0;i<=n;i++)
{
d=n%10;
s=s*10+d;
n=n/10;
}
cout<<"/n Reverse number:"<<s;
getch();
}