#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  printf("Enter data into the file:\n");
  FILE *fp;
  fp=fopen("f4.txt","w");
  char ch;
  while((ch=getchar())!=EOF)
  putc(ch,fp);
  printf("Data successfully saved....");
  getch();
}