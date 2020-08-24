#include<stdio.h>
#include<conio.h>
FILE *fp;
struct emp
{
  int emp_code;
  char emp_name[25];

}e[5];
void input_data()
{
 fp=fopen("emp_rec.txt","a");
 printf("Enter employee details max(5 record):\n");
	int i,ch;
	while(ch!=0)
	{ i=0;
	  printf("\nDetails for %d Employee:\n====================================================\n",i+1);
	  printf("Emp_Code: ");
	  scanf("%d",e[i].emp_code);
	  fflush(stdin);
	  printf("Emp_Name: ");
	  gets(e[i].emp_name);
	  printf("\n\nWant to enter more?(press 0 to exit).... ");
	  scanf("%d",&ch);
	  fflush(stdin);
	  fprintf(fp,"\nEmp_code: %d\nEmp_Name: %s \n-----------------------------",e[i].emp_code,e[i].emp_name);
	  i++;
	}
 fclose(fp);
}
void display()
{
  fp=fopen("emp_rec.txt","r");
  char ch;
  printf("Your file content:\n");
  while((ch=getc(fp))!=EOF)
  printf("%c",ch);
  fclose(fp);
}
void main()
{
  clrscr();
  input_data();
  printf("Press any key to view all\n\n");
  getch();
  clrscr();
  display();
  getch();
}
