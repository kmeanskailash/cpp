#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *arr,n,*ptr;
void item()
{ printf("Enter NO. of element: ");
  scanf("%d",&n);
  arr=(int*)calloc(n,sizeof(int));
  ptr=arr;
  if(arr==NULL)
  printf("\nMemory can't allocated\n");
  else
  printf("\nMemory allocated for %d elements\n",n);

}
void main()
{
 void ins();
 void disp();
 void del();
 int ch;
 item();
 do
 {clrscr();
   printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter Your choice: ");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:ins(); break;
   case 2:del(); break;
   case 3:disp(); break;
   case 4:continue;
   default:printf("\nWrong option choosen......\n");
   }
  getch();
 }while(ch!=4);

 getch();
}
void ins()
{
 if(arr==(ptr+n))
 printf("\nStack is full. No insertion possible\n");
 else
 {
  printf("Enter No. to be inserted: ");
  scanf("%d",arr);
  arr++;
  printf("\nSuccessfully inserted\n");
 }
}
void del()
{
 printf("del");
}
void disp()
{ int i;
 if(arr==(ptr-1))
 printf("\nStack is empty. Nothing to display\n");
 else
 {  printf("\nStack elements are: \n");
   for(i=n-1;i>=0;i--)
   { printf("\n%d",*(ptr+i));


   }
 }
}