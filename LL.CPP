#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node
{
 int a;
 node *link;
}*first,*last,*temp;
void insert_end()
{  temp=(struct node*)malloc(sizeof(struct node));
   if(first==NULL)
	{
	printf("\nEnter Element: ");
	scanf("%d",&temp->a);
	temp->link=NULL;
	first=last=temp;
	printf("\nNumber inserted");
	}
else
	{
	 printf("\nEnter Element: ");
	 scanf("%d",&temp->a);
	 temp->link=NULL;
	 last->link=temp;
	 last=temp;
	 printf("\nNumber inserted");
	}
}
void disp()
{   temp=(struct node*)malloc(sizeof(struct node));
     temp=first;
  if(first==NULL)
  printf("\nNO element to Display");
  else
  {     printf("\nAll Elements are: \n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->a);
		temp=temp->link;
	}

  }
}
void main()
{
	int ch;
	do
	{ clrscr();
	  printf("\n\n1.Insert to Linked list\n2.Display Element\n3.Exit\n\nEnter Your Choice: ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	   case 1: insert_end(); break;
	   case 2: disp(); break;
	   case 3:continue;
	   default:printf("Wrong choice: ");
	  }
	getch();
	}while(ch!=3);

}