#include<iostream.h>
#include<conio.h>
void swap (int&,int&);
void main()
{
  clrscr();
  int a,b;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<"Enter the value of b: ";
  cin>>b;
  cout<<"\nNumbers before swaping:\n a= "<<a<<"\n b= "<<b;
  swap(a,b);
  cout<<"\n\nNumbers after sawping:\n a= "<<a<<"\n b= "<<b;
  getch();
}
 void swap(int &x, int &y)
 {
    int temp;
    temp=x;
    x=y;
    y=temp;
 }


