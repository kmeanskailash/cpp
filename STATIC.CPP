#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum=0;
	clrscr();
	printf("Enter no. of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 printf("\nEnter Element: ");
	 scanf("%d",&a[i]);
	 sum+=a[i];
	}
	printf("\nSum =%d",sum);
	getch();
}
