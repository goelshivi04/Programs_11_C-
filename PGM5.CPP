#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int choice;
const float pi=3.14;
float rad,s1,s2,area,circum;
start:
cout<<"\n1. Area of circle\n";
cout<<"2. Area of rectangle\n";
cout<<"3. Circumference of circle\n";
cout<<"4. Area of square\n";
cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
  cout<<" Enter radius of the circle: ";
  cin>>rad;
  area=pi*rad*rad;
  cout<<"Area of the circle= "<<area<<" sq units";
  break;
case 2:
  cout<<"Enetr length: ";
  cin>>s1;
  cout<<"Enter breadth: ";
  cin>>s2;
  area=s1*s2;
  cout<<" Area of the rectangle= "<<area<<" sq units";
  break;
case 3:
  cout<<"Enter radius of circle: ";
  cin>>rad;
  circum=2*pi*rad;
  cout<<"Circumference of the circle = "<<circum<<" units";
  break;
case 4:
  cout<<"Enter side of square: ";
  cin>>s1;
  area=s1*s1;
  cout<<"Area of square : "<<area<<" sq units";
  break;
default:
  cout<<"\nIncorrect choice\n\n ";
  goto start;
}

getch();

}