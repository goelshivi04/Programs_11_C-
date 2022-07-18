#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,max=0;
cout<<"Enter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
cout<<"Enter third number : ";
cin>>c;
  if(a>max)
  max=a;
  if(b>max)
  max=b;
  if(c>max)
  max=c;
  cout<<"\nLargest number is : "<<max;
getch();
}