#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char a[30],ch;
int i,occ=0;
cout<<"Enter string: ";
cin.getline(a,30,'\n');
cout<<"Enter character to count occurence:" ;
cin>>ch;
for(i=0;a[i]!='\0';i++)
{
  if(a[i]==ch)
  occ++;
}
cout<<"Occurence of "<<ch<<" = "<<occ;
getch();
}