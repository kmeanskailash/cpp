#include<conio.h>
#include<stdio.h>
void main()
{
 FILE *fp;
 int count=0;
 char ch;
 fp=fopen("file.txt","w");
 clrscr();
 printf("\nEnter message here:\npress ctrl z to at last\n\n ");
 while((ch=getchar())!=EOF)
 {
     putc(ch,fp);
 }
 printf("\nfile saved....\n");
 //count total number of a in file
 fclose(fp);
 printf("press any key to view file content\n");
 getch();
 fp=fopen("file.txt","r");
 while((ch=getc(fp))!=EOF)
 {      if(ch=='a')
	count++;
	printf("%c",ch);
 }
 printf("\n\nTotal no. of a = %d",count);
 fclose(fp);
 getch();
 }