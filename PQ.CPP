#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int pq[2][max],ele,prio,pos=0;
void insert()
{  if(pos<=max-1)
   {  printf("\nEnter Element : ");
      scanf("%d",&ele);
      pq[0][pos]=ele;
      printf("\nEnter Priority: ");
      scanf("%d",&prio);
      pq[1][pos]=prio;
      printf("\nNumber Inserted ....\n");
      pos++;
   }
   else
   printf("\nNo such position available\n");

}
void del()
{
}
void disp()
{
 for(int i=0;i<pos;i++)
 {
   printf("\nElement %d\tpriority %d",pq[0][i],pq[1][i]);
 }
}
void main()
{
   int ch;
   while(1)
   {  clrscr();
      printf("\nPriority Queue Operation\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter Your choice: ");
      scanf("%d",&ch);
      switch(ch)
      {
       case 1:insert(); break;
       case 2:del();    break;
       case 3:disp();   break;
       case 4:exit(1);
       default:printf("\nSorry Invalid Option.....\n");
      }
      getch();
   }
}