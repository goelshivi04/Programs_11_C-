#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float sal,comm;
cout<<" Enter your salary: ";
cin>>sal;
if(sal>=30001)
comm=0.15*sal;
else if(sal>=22001 && sal<=30000)
comm=0.1*sal;
else if(sal>=12001 && sal<=22000)
comm=0.07*sal;
else if(sal>=5000 && sal<=12000)
comm=0.03*sal;
else
comm=0;

cout<<" Commision as per your salary = "<<comm;
getch();
}