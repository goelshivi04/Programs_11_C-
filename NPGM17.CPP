#include<iostream.h>
#include<conio.h>
long int sum_series(int);
void main()
{
  clrscr();
  long int n,ans;
  cout<<"Enter the value of n: ";
  cin>>n;
  ans=sum_series(n);
  cout<<"\nSum of the series = "<<ans;
  getch();
}

long int sum_series(int x)
{   long int sum=0;
    int i,j;
      for(i=1;i<=x;i++)
      {
	 for(j=1;j<=i;j++)
	 sum+=j;
      }
     return sum;
}