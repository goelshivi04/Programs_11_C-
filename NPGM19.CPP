#include<iostream.h>
#include<conio.h>
#include<string.h>
void reverse(char x[]);
void main()
{
  clrscr();
  char a[50];
  cout<<"Enter the string: ";
  cin.getline(a,50,'\n');
  reverse(a);
  cout<<"\nReverse of above string= "<<a;
  getch();
}

void reverse(char x[])
{   int i, j, temp;
    int len=strlen(x);
    for(i=0,j=len-1;i<=len/2,j>=len/2;i++,j--)
    {
	  temp=x[i];
	  x[i]=x[j];
	  x[j]=temp;
    }
}
