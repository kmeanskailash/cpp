#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 FILE *fp;
 int i;
 char ch[25];
 clrscr();
 //program to write into file
 fp=fopen("file_in_c.txt","w");
 printf("Enter your message:\n");
 for(i=0;i<=strlen(ch);i++)
 {
   putc(ch[i],fp);
 }
 fclose(fp);
 printf("\n\nyour file successfully saved...");
 getch();
}