#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
int i,j,flag=0;
char a[40];
cout<<"Enter string :";
cin.getline(a,40,'\n');
int len= strlen(a);
for(i=0,j=len-1;i<len/2;i++,j--)
{
 if(a[i]!=a[j])
 {
   flag=1;
   break;
 }
}
if(flag==0)
cout<<"It is a palindrome";
else
cout<<"It is not a palindrome";
getch();

}