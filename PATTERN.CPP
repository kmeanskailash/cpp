#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=0;i<13;i++)
 {  for(j=12;j>=i;j--)
    printf(" ");
   for(int k=0;k<=i*2;k++)
   printf("-");
   for(k=24;k>=i*2;k--)
   printf(" ");
   for( k=24;k>=i*2;k--)
   printf("-");
   printf("\n");

 }
 getch();
}