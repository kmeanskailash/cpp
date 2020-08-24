#include<stdio.h>
#include<conio.h>
void main()
{   struct emp
	{
	 int code;
	 char name[25];
	}obj[5];
	int i;
	printf("Enter five emp record:\n");
	for(i=0;i<5;i++)
	{
	 printf("\nDetails for %d employee\n\n",i+1);
	 printf("Emp Code: ");
	 scanf("%d",&obj[i].code);
	 fflush(stdin);
	 printf("Emp Name: ");
	 gets(obj[i].name);
	}
	printf("\n\nRecord successfully saved....\n");
	getch();
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\n\nEmployee %d\n",i+1);
	printf("Code %d",obj[i].code);
	printf("\nEmp Name: %s",obj[i].name);
	}
 getch();
}