#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,k,a=0;
cout<<"Enter number of rows : ";
cin>>n;
for(i=1;i<=n;i++)
{
  for(j=1;j<=n-i;j++)
  cout<<" ";
  for(k=1;k<=i+a;k++)
  cout<<"*";
  a++;
  cout<<endl;
}
a=n-1;
for(i=n-1;i>=1;i--)
{
  for(j=n-i;j>=1;j--)
  cout<<" ";
  for(k=i+a-1;k>=1;k--)
  cout<<"*";
  a--;
  cout<<endl;
}

getch();

}