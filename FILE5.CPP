#include<stdio.h>
#include<conio.h>
void main()
{ struct emp
  {
    int code;
    char name[25];
  }obj;
  FILE *fp;
  fp=fopen("emp.dat","ab"); //opened in binary mode
  printf("Enter Emp Code: ");
  scanf("%d",&obj.code);
  fflush(stdin);
  printf("ENter Name of the Employee: ");
  gets(obj.name);
  fwrite(&obj,sizeof(obj),1,fp);
  printf("\nData successfully saved....");
  getch();
  fclose(fp);
  }
