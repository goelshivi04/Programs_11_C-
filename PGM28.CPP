#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
int spc=0,vow=0,chr=0,i,oth=0;
char a[30];
cout<<"Enter string : ";
cin.getline(a,30,'\n');

for(i=0;a[i]!='\0';i++)
{
   a[i]=tolower(a[i]);
   if((a[i]>='a' && a[i]<='z')||(a[i]>='0' &&a[i]<='9'))
   {
     chr++;
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
     vow++;
   }
   else if(a[i]==' ')
   spc++;
   else
   oth++;
}
cout<<"\nNumber of Words= "<<spc+1;
cout<<"\nNumber of Vowels= "<<vow;
cout<<"\nNumber of Characters= "<<chr;
cout<<"\nNumber of other characters= "<<oth;

getch();
}