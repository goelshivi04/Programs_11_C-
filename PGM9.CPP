#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int fact,pro=1;
cout<<"/n Enter number to calculate it's factorial: ";
cin>>fact;
for(int i=fact;i>=1;i--)
pro*=i;
cout<<"\n Factorial of "<<fact<<" is "<<pro;

getch();
}