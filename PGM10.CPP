#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,a=-1,b=1,c;
cout<<" Enter last value: ";
cin>>n;
cout<<" Fibonacci series till "<<n<<" is ";
for(int i=0;i<=n;i++)
{  c=a+b;
   cout<<c<<" ";
   a=b;
   b=c;
}
getch();
}