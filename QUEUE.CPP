#include<stdio.h>
#include<conio.h>
#include<process.h>
int f=0,r=0,item,queue[5];
void insert();
void del();
void disp();
void main()
{  int  ch;
  while(1)
	{       clrscr();
		printf("\nQueue Operation\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		 case 1: insert(); break;
		 case 2: del(); break;
		 case 3: disp(); break;
		 case 4: exit(1);
		 default: printf("Sorry Wrong choice .... try again\n");
		  getch();
		}
		getch();
	}
}
void insert()
{
	if(r==5)
	printf("\nQueue is Full . NO other will insert\n\n");
	else
	{
		printf("Enter Number to be inserted: ");
		scanf("%d",&item);
		queue[r]=item;
		r++;
		printf("\nNumber %d inserted \n",queue[r-1]);
	}
}
void disp()
{
	if(r==0)
	{
	 printf("\nQueue is empty. NO item exist\n\n");
	}
	else
	{
	   printf("\nAll Items are:\n");
	   for(int i=f;i<r;i++)
	   printf("\t%d",queue[i]);

	}
}
void del()
{
	if(f==r)
	printf("Queue is empty. no deletion possible\n");
	else
	{
	  printf("%d number deleted from queue ",queue[f]);
	   for(int i=f;i<r;i++)
	   {
	     queue[i-1]=queue[i];
	   }
	   r--;
	}
}