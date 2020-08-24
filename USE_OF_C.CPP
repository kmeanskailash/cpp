#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 clrscr();
 char ch;
 printf("Enter any character:\n");
 scanf("%d",&ch);
 if(isupper(ch)==0)
 printf("This is Capital character");
 else if(islower(ch)==0)
 printf("This is small character");
 else
 printf("This is special character");
 getch();
 }