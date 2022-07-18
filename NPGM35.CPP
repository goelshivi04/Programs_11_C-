#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class admission
{
  private:
  int ad_no;
  char name[50],nclass[20];
  float fees;

  public:
  void read_data();
  void display();
  void draw_nos();
};
admission a[5],b;
void admission::read_data()
{
  cout<<"\nEnter admission number: ";
  cin>>ad_no;
  cout<<"\nEnter name: ";
  //cin.getline(name,50,'\n');
  gets(name);
  cout<<"\nEnter class: ";
  //cin.getline(nclass,20,'\n');
  gets(nclass);
  cout<<"\nEnter fees: ";
  cin>>fees;
}
void admission::display()
{
  cout<<"\nAdmission number: "<<ad_no;
  cout<<"\nName: "<<name;
  cout<<"\nClass: "<<nclass;
  cout<<"\nFees: "<<fees;
}
void admission::draw_nos()
{
  int arr[5];
  int n1,n2,i;
  n1=random(1991)+10;
  n2=random(1991)+10;
  for(i=0;i<100;i++)
  {
    if((arr[i]==n1)||(arr[i]==n2))
    display();
  }
}

void main()
{clrscr();
 for(int i=0;i<5;i++)
 {
    a[i].read_data();
    a[i].display();
  }
    cout<<"\n Details of student generated randomly: ";
    b.draw_nos();

getch();
}