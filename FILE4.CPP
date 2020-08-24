#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char name[25],ch;
 int roll;
 clrscr();
 fp=fopen("stu_record.txt","a");
 printf("Enter Roll:");
 scanf("%d",&roll);
 fprintf(fp,"%d",roll);
 printf("Enter name:");
 fflush(stdin);
 gets(name);
 fprintf(fp,"\n%s",name);
 fclose(fp);
 printf("Data successfully saved......");
 getch();
 printf("\n\n\nEnter any key to view data>>>>>>>>>>>>>>>>\n");
 getch();

 fp=fopen("stu_record.txt","r");
 clrscr();
while((ch=getc(fp))!=EOF)
printf("%c",ch);
getch();
fclose(fp);
 }