#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int hrs,secs,min,total_secs;
cout<<"Enter time in hours: ";
cin>>hrs;
cout<<"Enter time in minutes: ";
cin>>min;
cout<<"Enter time in seconds: ";
cin>>secs;
hrs*=60*60;
min*=60;
total_secs=secs+min+hrs;
cout<<"Entered time in secs = "<<total_secs;
getch();



}