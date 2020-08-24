#include<iostream.h>
#include<conio.h>
void abc( char *s)
{
 if(s[0]=='\0')
 return ;
 abc(s+1);
 abc(s+1);
  cout<<*s;
}
void main()
{ clrscr();
 abc("123");
 getch();
}