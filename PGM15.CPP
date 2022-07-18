#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
int i;
char a[30];
cout<<"Enter string : ";
cin.getline(a,30,'\n');
for(i=0;a[i]!='\0';i++)
{
  if(a[i]>=65 && a[i]<=91 )
  a[i]=tolower(a[i]);
  else
  a[i]=toupper(a[i]);
}
cout<<"Entered string: ";
for(i=0;a[i]!='\0';i++)
cout<<a[i];

getch();
}