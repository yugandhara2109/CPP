#include<iostream.h>
#include<conio.h>
#define max 5
template<class t1>
class stack{
public:
t1 a[max];
int top;
stack()
{
top=-1;
}
int isfull()
{
if(top==max-1)
return 1;
else
return 0;
}
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}
void push(t1 num)
{
if(isfull())
cout<<"stack is full";
else
{
top++;
a[top]=num;
cout<<"\n push succ..";
}
}
void pop()
{
t1 val;
if(isempty())
{
cout<<"\n stack empty";
}
else
{
val=a[top];
top--;
cout<<"\n poped value="<<val;
}
}
};
int main()
{
clrscr();
stack<int>ob;
ob.push(10);
ob.push(30);
ob.push(40);
ob.pop();
getch();
}