#include<stdio.h>
#include<conio.h>


  void main()
  {  int roll[5],marks[5],i;
     clrscr();
     char name[5][32],fname[5][32],add[5][32];
   for(i=0;i<5;i++)
   {  printf("Enter roll: ");
     scanf("%d",&roll[i]);
     flushall();
     printf("\n\nEnter details for %d Student\n",i+1);
    printf("Enter  Student name: ");
    gets(name[i]);
    printf("Enter His\\Her Father's Name: ");
    gets(fname[i]);

    printf("Enter Marks: ");
    scanf("%d",&marks[i]);
    }

    getch();

  }