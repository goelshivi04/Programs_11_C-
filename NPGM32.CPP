#include<iostream.h>
#include<conio.h>

struct student
{
  char name[50],res;
  int age,nclass;
  float marks[4],avg;
};
student s1;

void main()
{
  cout<<"Enter name of the student: ";
  cin.getline(s1.name,50,'\n');
  cout<<"Enter age of the student: ";
  cin>>s1.age;
  cout<<"Enter class of the student: ";
  cin>>s1.nclass;
  cout<<"Enter marks of the student: ";
  for(i=0;i<4;i++)
  cin>>s1.marks[i];

  for(i=0;i<4;i++)
  sum+=s1.marks[i];
  s1.avg=sum/4;

  if(s1.avg>=40)
  s1.res='P';
  else
  s1.res='Q';

  cout<<"Average of the student= "<<s1.avg;
  cout<<"Result of the student= "<<s1.res;

  getch();
}






