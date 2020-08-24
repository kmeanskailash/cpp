#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{ clrscr();
   char word[200];
  fstream file;
  file.open("a.txt",ios::app);
   cout<<"\ntype something here.......\n";
   gets(word);
   file>>word;
   cout<<"\n\nFile Successfully saved.......\n";
   file.close();

   getch();
}               e