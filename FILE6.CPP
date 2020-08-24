#include<stdio.h>
#include<conio.h>
void main()
{
  struct sample
  { int c;
    char n[25];
  }s;
  FILE *fp;
  printf("Your file content:\n");
  fp=fopen("emp.dat","rb");

  while((fread(&s,sizeof(s),1,fp))!=EOF)
  {
  printf("Code %d\nName %s",s.c,s.n);
  }
  fclose(fp);
  getch();
 }