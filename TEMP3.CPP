#include<iostream.h>
#include<conio.h>
template<class t1>
class square
{
public:
square(t1 a)
{
t1 b=a*a;
cout<<"\n square="<<b;
}
};
int main()
{
clrscr();
square<int>ob(10);
square<float>ob1(20.0f);
square<float>ob2(3.4);
getch();
}
