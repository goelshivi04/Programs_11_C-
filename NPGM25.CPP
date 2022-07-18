#include<iostream.h>
#include<conio.h>
int array(int,int,int);
void main()
{
  clrscr();
  int n[20],size,a,pos;
  cout<<"Enter the size of array: ";
  cin>>size;
  cout<<"Enter the elements of the array: \n";
  for(i=0;i<n;i++)
  cin>>n[i];
  cout<<"Enter the element to find its position: ";
  cin>>a;
  pos=array(n,size,a);
  cout<<"Position of the element "<<a<<" is "<<pos;
  getch();
}

int array(int no,int s,int x)
{
    for(i=0;i<s;i++)
    {
	if(no[i]==x)
	break;
    }
    return(i+1);
}


