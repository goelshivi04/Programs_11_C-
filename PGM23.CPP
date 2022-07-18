#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,a[10],i,max,min;
cout<<"Enter total number of elements : ";
cin>>n;
cout<<"Enter Elements: ";
for(i=0;i<n;i++)
cin>>a[i];

cout<<"Entered Matrix is ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

max=min=a[0];
for(i=0;i<n;i++)
{
  if(max<a[i])
  max=a[i];
  if(min>a[i])
  min=a[i];
}
cout<<" \nMaximum Number = "<<max;
cout<<" \nMinimum number = "<<min;
getch();
}