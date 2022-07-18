#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int r,c,temp,i,j,a[30][30],b[30][30];
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
 for(j=0;j<c;j++)
 b[i][j]=a[i][j];

for(i=0;i<c;i++)
{ temp=0;
  temp=a[0][i];
  a[0][i]=a[r-1][i];
  a[r-1][i]=temp;
}
cout<<"\n\nMatrix after swaping first and last row: ";
for(i=0;i<r;i++)
{ cout<<endl;
  for(j=0;j<c;j++)
  cout<<a[i][j]<<" ";
}

for(i=0;i<r;i++)
{ temp=0;
  temp=b[i][0];
  b[i][0]=b[i][c-1];
  b[i][c-1]=temp;
}
cout<<"\n\nMatrix after swaping first and last column: ";
for(i=0;i<r;i++)
{ cout<<endl;
  for(j=0;j<c;j++)
  cout<<b[i][j]<<" ";
}

getch();
}