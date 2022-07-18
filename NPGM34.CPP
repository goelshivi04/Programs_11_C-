#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Travel
{
  private:
  long Travelcode;
  char Place[20];
  int no_of_travellers,no_of_buses;

  public:
  void newtravel();
  void display();

};
Travel t[5];
void Travel::newtravel()
{
  cout<<"\nEnter Travel code: ";
  cin>>Travelcode;
  cout<<"\nEnter Place: ";
  //cin.getline(Place,20,'\n');
  gets(Place);
  cout<<"\nEnter no of travellers: ";
  cin>>no_of_travellers;

  if(no_of_travellers<20)
  no_of_buses=1;
  else if(no_of_travellers>=20 && no_of_travellers<40)
  no_of_buses=2;
  else
  no_of_buses=3;

}

void Travel::display()
{
   cout<<"\nTravelcode: "<<Travelcode;
   cout<<"\nPlace: "<<Place;
   cout<<"\nNo of buses: "<<no_of_buses;
   cout<<"\nNo of travellers: "<<no_of_travellers<<endl;
}

void main()
{ clrscr();

for(int i=0;i<5;i++)
 {
    t[i].newtravel();
    cout<<"\n\nRecord of place "<<i+1;
    t[i].display();
 }

getch();
}

