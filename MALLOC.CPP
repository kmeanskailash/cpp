#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,i,sum=0;
	clrscr();
	printf("Enter no. of elements:\n");
	ptr=(int *)malloc(n*sizeof(int));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter numbers: ");
		scanf("%d",ptr);
		sum+=*ptr;
		ptr++;
	}
	printf("Sum of numbers =%d",sum);
	getch();
}