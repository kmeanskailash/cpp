#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
  clrscr();
   int roll;
   char name[25],ch;
   fstream file;
   file.open("a.txt",ios::app);
   cout<<"Enter roll";
   cin>>roll;
   file<<"\nRoll: "<<roll;
   cout<<"Enter Name of the student: ";
   cin>>name;
   file<<"\nName: "<<name<<endl;
   file.close();
   cout<<"File Successfully saved............";
   getch();
   clrscr();

   getch();
   cout<<"\nYour file content:\n";
   file.open("a.txt",ios::in);
   while(!file.eof())
   {
     file>>ch;
     cout<<ch;
   }
   file.close();
   getch();
}