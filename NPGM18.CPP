#include<iostream.h>
#include<conio.h>
long int sum_series(int,int);
void main()
{
  clrscr();
  long int n,ans;
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Enter the value of x: ";
  cin>>x;
  ans=sum_series(n,x);
  cout<<"\nSum of the series = "<<ans;
  getch();
}

long int sum_series(int a,int b)
{   long int sum=1;
    int i,j,fact;
      for(i=1;i<=b;i++)
      {  fact =1;
	 for(j=1;j<=a+1;j++)
	 fact*=j;
	 sum+=float(pow(b,a)/fact);
      }
     return sum;
}


