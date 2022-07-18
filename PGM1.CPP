#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int eng,hin,mat,sci,sst,per;
cout<<" Enter marks in English (out of 100): ";
cin>>eng;
cout<<" Enter marks in Maths (out of 100): ";
cin>>mat;
cout<<" Enter marks in Hindi (out of 100): ";
cin>>hin;
cout<<" Enter marks in Social Studies (out of 100): ";
cin>>sst;
cout<<" Enter marks in Science (out of 100): ";
cin>>sci;
per=(mat+hin+eng+sst+sci)/5;
cout<<" Your Percentage is "<<per<<" %";

getch();

}