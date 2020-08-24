#include<conio.h>
#include<iostream.h>
#include<time.h>
#include<dos.h>
#include<string.h>
void main()
{
 long currenttime;
 char timeStr[50];
 while(!kbhit())
 {   clrscr();
 currenttime=time(NULL);

 strcpy(timeStr,ctime(&currenttime));


 cout<<"Current time of the System: ";
 cout<<timeStr;
 delay(1000);
 }
 getch();

}