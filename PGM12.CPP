#include<iostream.h>
#include<conio.h>
void main()
{clrscr();

int n1,n2,a,b,n,lcm,hcf;
cout<<"Enter first number :";
cin>>n1;
cout<<"Enter second number: ";
cin>>n2;
if(n1>n2)
 {
  a=n1;
  b=n2;
 }
else
 {
  a=n2;
  b=n1;
 }
while(n!=0)
{
  n=a%b;
  a=b;
  b=n;
}
hcf=a;
lcm=(n1*n2)/hcf;
cout<<"\nLCM of two numbers = "<<lcm;
cout<<"\nHCF oftwo numbers = "<<hcf;



getch();

}