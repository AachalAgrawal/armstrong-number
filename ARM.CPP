#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,num=0,x,rem;
cout<<"enter number";
cin>>n;
x=n;
while(n!=0)
{
rem=n%10;
num=num+rem*rem*rem;
n=n/10;
}
if(num==x)
cout<<"\narmstrong";
else
cout<<"\nnot armstrong";
getch();
}