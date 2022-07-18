#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,a[20],temp=0;
cout<<"Enter total number of elements : ";
cin>>n;
cout<<"Enter elements :";
for(i=0;i<n;i++)
cin>>a[i];

cout<<"Entered matrix is ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

for(i=0,j=n-1;i<n/2;i++,j--)
{
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
cout<<"\n\nReversed matrix is ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

getch();
}
