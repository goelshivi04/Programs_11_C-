#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int x,a,b,c;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
cout<<"Enter third number: ";
cin>>c;
x=a<b&&a<c?a:b<c?b:c;
cout<<x<<" is the smallest number. ";
getch();
}