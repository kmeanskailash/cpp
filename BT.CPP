#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
 int a;
 struct node *left, *right;
};
struct node *p=NULL;
create(struct node *p);
disp(struct node *p,int level);
void main()
{
  int item,ch;
  p=NULL;
  while(1)
  {
   clrscr();
   printf("\n\nBinary Tree\n\n");
   printf("\n1.Create\n2.Display\n3.Exit\n\nEnter Your choice: ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:{
		p=(struct node*)malloc(sizeof(struct node));
		create(p); break;
	    }
    case 2:{
		printf("\n\nNode of Binary Tree\n\n");
		disp(p,1); break;
	    }
    case 3: exit(1);
    default:printf("\nWrong choice: ");
   } getch();
  }//while closed
}
create(struct node *ptr)
{
 struct node *nl,*nr;
 int item;
 char ch;
 if(ptr!=NULL)
 {
  printf("\nEnter an Element: ");
  scanf("%d",&item);
  ptr->a=item;
  printf("\nDo you want a left child of %d (y\n)?",ptr->a);
  ch=getche();
  if((ch=='y')||(ch=='Y'))
  {
  nl=(struct node*)malloc(sizeof(struct node));
  ptr->left=nl;
  create(nl);
  }
  else
  {
   ptr->left=NULL;
   create(NULL);
  }
  printf("\nDo you want a right child of %d (y/n)?",ptr->a);
   ch=getche();
   if( ch=='y' || ch=='Y')
   {
    nr=(struct node *)malloc(sizeof(struct node));
    ptr->right=nr;
    create(nr);
   }
   else
   {
    ptr->right=NULL;
    create(NULL);
   }


 }
  return 0;
}
disp(struct node *ptr, int level)
{
  int i;
   {
    if(ptr!=NULL)
    {
     disp(ptr->right,level+1);
     for(i=0;i<level;i++)
     printf("%4d\n",ptr->a);
     disp(ptr->left,level+1);
    }
   }
   return 0;
}