//program to create a priority queue
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int pq[2][max],pos=0;
void main()
{
	void insert();
	void display();
	void del();
	int ch;
	do
	{       clrscr();
		printf("\nPriority Queue\n\n1.Insert Element\n2.Delete Element\n3.Display Element\n4.Exit\n\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		 case 1: insert(); break;
		 case 2: del(); break;
		 case 3: display(); break;
		 case 4:exit(1);
		 default:printf("\nInvalid option... Try again....");
		}
		getch();
	}while(ch!=4);
void insert()
{   if(pos==5)
    {
	printf("\nNo available space to Insert Element\n");
	pos--;
    }
    else
    {
    printf("Enter Element: ");
    scanf("%d",&pq[0][pos]);
    printf("Enter Its priority Value: ");
    scanf("%d",&pq[1][pos]);
    pos++;
    }

}
void del()
{
 printf("This is under construction... ");
}
void display()
{
	if(int i=0;i<2;i++)
	{
		if(i==0)
		printf("Elements are: ");
		else
		printf("Priority Value: ");
		for(int j=0;j<=pos;j++)
		printf("\t%d\n\t%d",pq[0][j],pq[1][j]);
	}
}
}//main closed here