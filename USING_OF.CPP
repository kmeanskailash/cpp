#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int ch[5],*ptr,i;
 printf("Enter five value\n");
 for(i=0;i<5;i++)
 scanf("%d",&ch[i]);

 ptr=&ch[0];
 printf("Value using pointer\n");
 for(i=0;i<5;i++)
 {  if(*ptr%2==0)
   printf("%d\n",*ptr);

  ptr++;
 }
 getch();
}