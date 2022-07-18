#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int r,c,rsum=0,csum=0,i,j,a[30][30];
cout<<"Enter number of rows: ";
cin>>r;
cout<<"Enter number of columns: ";
cin>>c;
cout<<"Enter elements: ";
for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 cin>>a[i][j];

cout<<"Entered matrix is ";
for(i=0;i<r;i++)
{cout<<endl;
 for(j=0;j<c;j++)
 cout<<a[i][j]<<" ";
}

for(i=0;i<r;i++)
{
 rsum=0;
 for(j=0;j<c;j++)
 rsum+=a[i][j];
 cout<<"\nSum of row number "<<i+1<<" = "<<rsum;
}
for(i=0;i<r;i++)
{
 csum=0;
 for(j=0;j<c;j++)
 csum+=a[j][i];
 cout<<"\nSum of column number "<<i+1<<" = "<<csum;
}
getch();
}