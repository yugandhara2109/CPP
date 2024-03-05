#include<iostream.h>
#include<conio.h>
inline int area(int l,int b)
{
return (l*b);
}
inline int perimeter(int l,int w)
{
return(2*(l+w));
}
int main()
{
int l,b,w;
clrscr();
cout<<"Enter length,breadth,width";
cin>>l>>b>>w;
cout<<"\n Area of rectangle"<<area(l,b);
cout<<"\n Perimeter of rectagle"<<perimeter(l,w);
getch();
}