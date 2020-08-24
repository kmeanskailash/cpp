#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,no;
  for(i=2;i<1000;i++)
  {   no=i;
     int x;
     x=0;
    while(i!=0)
    { j=i%10;
      x = x + j*j*j;
      i=i/10;

    }
    if(x==no)
    { cout<<x<<" is armstrong number\n";
    }
  }

  getch();
}