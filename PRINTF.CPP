#include<stdio.h>
#include<conio.h>
void main()
{
 struct details
  {
   int roll,marks;
   char name[32],fname[32];
  }s[5];
  int i;
  char ch;
  clrscr();
  //input five student record
  printf("Enter student record (max 5)\n");
  for(i=0;i<5;i++)
  { printf("\nEnter details for student %d",i+1);
    printf("\n===================================\n");
    printf("Roll:");
    scanf("%d",&s[i].roll);
    printf("Name:");
    fflush(stdin);
    gets(s[i].name);
    printf("Father's Name");
    gets(s[i].fname);
    printf("Marks:");
    fflush(stdin);
    scanf("%d",&s[i].marks);


  }
  clrscr();
  printf("To view all details press any key>>>>>>>\n");
  getch();
  for(i=0;i<5;i++)
  {
   printf("\nRoll: %d",s[i].roll);
   printf("\nName: %s",s[i].name);
   printf("\nFather's Name: %s",s[i].fname);
   printf("\nmarks: %d",s[i].marks);
  }
      printf("\nThanks for using our service \n");
  getch();
}