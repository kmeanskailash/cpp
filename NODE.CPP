#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
  int x,y;
  node *next;
}*start,*end,*t;
void main()
{
	char ch;
	start=end=NULL;
	do{
		t=new(node);
		if(t==NULL)
		{
		cout<<"Over Flow";
		break;
		}
		cout<<"Enter two nos: ";
		cin>>t->x>>t->y;
		t->next=NULL;
		if(start==NULL)
		start=end=t;
		else
		{
		 end->next=t;
		 end=t;
		}
		cout<<"\nDo you want to add more(y/n)?: ";
		ch=getchar();
	  }while(ch=='y' || ch=='Y');//do closed here
	  t=start;
	  cout<<"\nAll list elements:\n";
	  while(t!=NULL)
	  {
	   cout<<t->x<<t->y<<endl;
	   t=t->next;
	  }
	 getch();
}