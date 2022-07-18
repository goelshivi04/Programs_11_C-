#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n;
cout<<"Enter number of rows : ";
cin>>n;
for(int x=1;x<=n;x++)
{
  for(int y=1;y<=n-x;y++)
    cout<<" ";
  for(int i=1;i<=x;i++)
    cout<<i<<" ";

    cout<<endl;
}
getch();

}