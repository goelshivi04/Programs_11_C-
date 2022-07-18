#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
char a[30];
int i,vow=0,cons=0,digi=0,spc=0,spl=0;
cout<<"\nEnter string : ";
cin.getline(a,30,'\n');
for(i=0;a[i]!=0;i++)
{ a[i]=tolower(a[i]);
 if(a[i]>='a' && a[i]<='z')
 {
  if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
  vow++;
  else
  cons++;
 }
 else if(a[i]>='0' && a[i]<='9')
 digi++;
 else if(a[i]==' ')
 spc++;
 else
 spl++;
}
cout<<" \nNumber of vowels = "<<vow;
cout<<" \nNumber of consonants = "<<cons;
cout<<" \nNumber of digits = "<<digi;
cout<<" \nNumber of special charcters = "<<spl;
cout<<" \nNumber of spaces = "<<spc;
getch();
}

