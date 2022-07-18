#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n,num,r=0,rev=0,digi=0;
cout<<"Enter number: ";
cin>>n;
num=n;
while(n!=0)
{
  r=n%10;
  digi++;
  rev=rev*10+r;
  n/=10;
}
cout<<" Reverse number= "<<rev;
cout<<"\nNumber of digits= "<<digi;
if(rev==num)
cout<<"\nIt is a palindrome";
else
cout<<"\nIt is not a palindrome";
getch();

}