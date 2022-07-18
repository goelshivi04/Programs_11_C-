#include<iostream.h>
#include<conio.h>
void prime(int);
void main()
{
  clrscr();
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  prime(n);
  getch();
}

void prime(int a)
{   int i,j,flag=0;
      for(i=1;i<=a;i++)
      {     flag=0;
	 for(j=2;j<=i/2;j++)
	 {
	   if(i%j==0)
	   {
	       flag=1;
	       break;
	   }
	 }
     if(i==1)
     flag=1;
     if(flag==0)
     cout<<i<<endl;
    }
}


