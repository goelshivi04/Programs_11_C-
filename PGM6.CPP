#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int yr;
cout<<"\n Enter year to check whether it is a leap year or not:";
cin>>yr;
if(yr%4==0 && yr%100!=0 || yr%400==0)
cout<<" It is a leap year.";
else
cout<<" It is a not a leap year.";
getch();

}