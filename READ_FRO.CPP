#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 FILE *fp;
 int i;
 char ch;
 clrscr();
 //program to read from file  and display on screen
 fp=fopen("file_in_c.txt","r");
 printf("\nYour file content\n");
 while(!feof(fp))
 { ch=getc(fp);
   printf("%c",ch);
 }
 fclose(fp);
 printf("\n\nyour file successfully saved...");
 getch();
}