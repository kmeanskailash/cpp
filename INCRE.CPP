#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,y,z;
 z=15;
 y=++z + z--;
 x=++y + ++y + z--;
 z=--x + --x + x++;
 printf("\nx=%d",x);
 printf("\ny=%d",y);
 printf("\nz=%d",z);
 getch();
}