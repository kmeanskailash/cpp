#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int *p,n,*ptr;
 printf("Enter No. of Elements: ");
 scanf("%d",&n);
 p=(int*)malloc(sizeof(int)*n);
 ptr=p;
 for(int i=0;i<n;i++)
 {
   scanf("%d",p);
   p++;
 }
 printf("\nAll Elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",*ptr);
  ptr=ptr+1;
 }
 getch();
}