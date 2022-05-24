#include<iostream>

using namespace std;

#include<ctype.h>
class hall
{
int seat;

char name[25];

static int take;

public:

void get_data()

{

 take++;

 cout<<"Seat Number occupied: "<<take<<endl;

 cout<<"Name of the guest is: ";

 cin.getline(name,25); //used to read strings or line

 seat=take;

}

//status of seats

static void status()

{

 cout<<"Total number of seats in hall =50"<<endl;

 cout<<"Seats taken by the guest= "<<take<<endl;

 cout<<"Available seats are: "<<50-take<<endl;

}



//displaying the data

void show_data()

{

 cout<<"Seat Number is: "<<seat<<endl;

 cout<<"Name of guest is: "<<name<<endl;

}

};



hall h[50];

int hall::take;



int main()

{

int i,s;

char m='Y',c; //

 for(i=0;m=='Y'&&i<50;i++)

  {

   h[i].get_data();

   hall::status();

   cout<<"Do you want more entries of guest?(Y/N):";

   cin>>m; //Y, N , n, y

   m=toupper(m); //converting char to uppercase

   c=cin.get();

  }

cout<<"Enter seat number to be displayed: ";

 cin>>s;

h[s-1].show_data();

}
