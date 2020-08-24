#include<iostream.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  positive:
  cout<<"Enter positive number: ";
  cin>>i;
  if(i<0)
  { cout<<"This is not positive number try again...";
  goto positive;
  }
  else
  cout<<"Thanks for giving positive number";
  getch();
}