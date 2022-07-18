#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Serial
{
  private:
  int Serialcode,Noofepisodes;
  float Duration;
  char Title[20];

  public:
  void Newserial();
  void Otherentries(float,int);
  void Dispdata();
};

 void Serial::Newserial()
 {
    cout<<"\nEnter Serial Code: ";
    cin>>Serialcode;
    cout<<"\nEnter title: ";
    //cin.getline(Title,20,'\n');
    gets(Title);
}

 void Serial::Otherentries(float dur,int no)
 {
     Duration=dur;
     Noofepisodes=no;
 }

void Serial::Dispdata()
{
    cout<<"\nSerial code: "<<Serialcode;
    cout<<"\nTitle: "<<Title;
    cout<<"\nDuration: "<<Duration;
    cout<<"\nNo of episodes: "<<Noofepisodes<<endl<<endl;
}

void main()
{clrscr();
 int no,dur;
 Serial s[5];
 for(int i=0;i<5;i++)
 {
  s[i].Newserial();
  cout<<"\nEnter duration: ";
  cin>>dur;
  cout<<"\nEnter no of episodes: ";
  cin>>no;
  s[i].Otherentries(dur,no);
  cout<<"\n\nRecord of Serial "<<i+1<<endl;
  s[i].Dispdata();

}
getch();
}