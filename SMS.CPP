#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void add()
{
  int marks,roll;
  char sname[32];
  cout<<"\n\nRoll: ";
  cin>>roll;
  cout<<"Name: ";
  gets(sname);
  cout<<"Marks: ";
  cin>>marks;
  cout<<"\n\nRecord saved successfully.........\n";
  getch();
}
void main()
{

 fstream file;
 int opt;

  do
  {
   clrscr();
   cout<<"\n\t\t\tSTUDENT MANAGEMENT SYSTEM 2.0 \n\t\t******************************************\n";
   cout<<"\n\n1.Enroll new student\n2.Show all student\n3.Exit\n\nEnter Your Choice: ";
   cin>>opt;
    switch (opt)
    {
      case 1:
	     { add();
	      break;
	     }
    }//switch closed
  }while(opt!=3);
 getch();
}