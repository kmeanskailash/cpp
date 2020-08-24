#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n,*ptr,top=-1;
void item()
{
 printf("Enter No. of items to store: ");
 scanf("%d",&n);
 printf("\n\nMemory allocated for %d elements \n",n);
 ptr=(int *)calloc(n,sizeof(int));
}
void main()
{
   void ins();
   void del();
   void disp();
   int ch;
   item();
   getch();
   do
   {

     clrscr();
     printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter your choice: ");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:ins(); break;
      case 2: del();  break;
      case 3: disp(); break;
      case 4: continue;
      default: printf("\nWrong choice....\n");
     }
     getch();
   }while(ch!=4);
   getch();
}
void ins()
{       top++;
	if(top==n)
       {  top--;
	printf("\nStack is Full. No element insertion possible\n");
       }
	else
	{
	 printf("Enter Number: ");
	 scanf("%d",ptr[top]);
	 printf("\nNumber inserted successfully.....\n");
	}
}
void del()
{
   if(top==-1)
   printf("\nStack is empty");
   else
   {

   }

}
void disp()
{       if(top==-1)
	printf("\nStack is empty. nothing to display");
	else
	{
		for(int i=top;i>=0;i--)
		{
		  printf("\n%d",ptr[i]);
		}
	}
}