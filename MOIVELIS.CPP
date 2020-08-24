#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 fp=open("movieList.txt","app");
 char movieName[20],ch='y';
 int  code;
 while(ch=='y')
 {
  printf("\nMovie Code: ");scanf("%d",&code);
  printf("\nMovie Name: ");gets(movieName);
  fprintf(fp,"\nCode:%d\t\tMovie Name:%s\n*************************************\n",code,movieName);

  printf("\nPress  y for input more?\n");scanf("%c",&ch);
 }

 fclose(fp);
 getch();
}