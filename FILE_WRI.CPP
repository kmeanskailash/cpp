#include<stdio.h>
#include<conio.h>
#include<fstream.h>
struct no
{
  int roll,marks;
}obj;
void main()
{  clrscr();
 fstream file("file5.dat",ios::app);

   cout<<"Enter Roll ";
   cin>>obj.roll;
   cout<<"Enter Marks ";
   cin>>obj.marks;
   file.write((char *)&obj,sizeof(obj));
   cout<<"Data Successfully saved...";
   file.close();
   getch();
}