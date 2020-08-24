#include<stdio.h>
#include<conio.h>
int arr[5],t=0;
void main()
{ void ins();
   void disp();
   void del();
 int ch;
   do{
	clrscr();
	printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\n\nEnter Your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:ins(); break;
		case 2:del(); break;
		case 3:disp(); break;
		case 4:continue;
		default:printf("wrong choice: ");
	}
	getch();
	}while(ch!=4);
}
void ins()
{
	if(t==5)
	{
	 printf("Stack is full");
	}
	else
	{
	printf("Enter number: ");
	scanf("%d",arr[t]);
	printf("\n%d inserted.....\n",arr[t]);
	t++;
	}
}
void disp()
{
 if(t==-1)
 printf("empty stack");
 else
 {
	printf("All elementsf are:\n");
	for(int i=t-1;i>=0;i--)
	printf("\n%d",arr[i]);
 }
}
void del()
{
 if(t==-1)
 printf("No deletion possible no data exist");
 else
 {
  printf("%d deleted",arr[t]);
  t--;
 }
}