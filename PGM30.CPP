#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int r,c,a[10][10],i,j;
cout<<"Enter number of rows : ";
cin>>r;
cout<<"Enter number of columns : ";
cin>>c;
cout<<"Enter elements : ";
for(i=0;i<r;i++)
 for(j=0;j<c;j++)
   cin>>a[i][j];

cout<<"\nEntered Matrix : ";
for(i=0;i<r;i++)
{
 cout<<endl;
 for(j=0;j<c;j++)
 cout<<a[i][j]<<"\t";
}
cout<<"\nLower Left Triangle Matrix\n";
for(i=0;i<r;i++)
{  cout<<endl;
   for(j=0;j<c;j++)
   {
    if(i>=j)
    cout<<a[i][j]<<"\t";
    else
    cout<<"\t";
   }
}
cout<<"\nLower Right Triangle Matrix\n";
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
   {
    if(i+j>=r-1)
    cout<<a[i][j]<<"\t";
    else
    cout<<"\t";
   }
   cout<<endl;
}

cout<<"\n\nUpper Left Triangle Matrix\n";
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
   {
    if(i+j<r)
    cout<<a[i][j]<<"\t";
    else
    cout<<"\t";
   }
   cout<<endl;
}

cout<<"\nUpper Right Triangle Matrix\n";
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
   {
    if(i<=j)
    cout<<a[i][j]<<"\t";
    else
    cout<<"\t";
   }
   cout<<endl;
}
getch();
}