#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num,n,i=0,rem,a[20],j;
cout<<"Enter number : ";
cin>>n;
num=n;
while(n>1)
{
  rem=n%2;
  a[i]=rem;
  i++;
  n=n/2;
}
a[i]=1;
cout<<"\nThe binary equivalent of "<<num<<" is ";
for(j=i;j>=0;j--)
cout<<a[j];

getch();
}