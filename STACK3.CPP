#include<stdio.h>
#include<conio.h>
#include<process.h>
int stack[5],top=-1;
void ins()
{

 if(top==4)
 {
 printf("\nStack is full\n");
 }
 else
 { top++;
  printf("\nEnter element: ");
  scanf("%d",&stack[top]);
  printf("\nNumber Inserted.");
 }
}
void del()
{
  if(top==-1)
  printf("\nNo Element to Delete more...\n");
  else
  { top--;
    printf("\nNumber %d deleted from the Stack\n",stack[top+1]);
  }
}
void disp()
{
  if(top==-1)
  printf("\nStack is empty..");
  else
  {
   for(int i=top;i>=0;i--)
   printf("%d\t",stack[i]);
  }
}
void main()
{  int ch;
 do{  clrscr();
      printf("\Stack Operation\n\n1.Add Element\n2.Delete Element\n3.Display Element\n4.Exit\n\nEnter Your Choice: ");
      scanf("%d",&ch);
      switch(ch)
      {
       case 1: ins(); break;
       case 2: del(); break;
       case 3: disp(); break;
       case 4: exit(0);
       default:printf("\nSorry..! Invalid Option ....\n");
      }
      getch();
 }while(ch!=4);

}