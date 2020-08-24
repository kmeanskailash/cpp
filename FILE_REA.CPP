#include<iostream.h>
#include<fstream.h>
#include<conio.h>
struct abc
{
  int a,b;
}obj;
void main()
{
 clrscr();
 fstream file("file5.dat",ios::in);
 while(!file.eof())
 {
 file.read((char *)&obj,sizeof(obj));
 cout<<"\n\nRoll: "<<obj.a;
 cout<<"\nmarks: "<<obj.b;
 }
 file.close();
 getch();
}