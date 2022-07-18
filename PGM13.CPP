#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n,i,a=1,b=0,c=0;
cout<<"Enter last value: ";
cin>>n;
cout<<"Pell series till " <<n<<" is ";
for(i=0;i<n;i++)
{
 c=a+b*2;
 cout<<c<<"  ";
 a=b;
 b=c;
}
getch();
}