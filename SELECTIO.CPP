#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],n,i,j,t;
 clrscr();
 printf("Enter No. of Element: ");
 scanf("%d",&n);
 getch();
 clrscr();
 printf("Enter %d element ",n);
 for(i=0;i<n;i++)
 {
	printf("\nEnter %d Element: ",i+1);
	scanf("%d",&a[i]);
 }
 printf("\n\nBefore Sorting:\n");
 for(i=0;i<n;i++)
 printf("\t%d",a[i]);
 //sorting technique
 for(i=0;i<n;i++)
 {
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
 }
 getch();
 printf("\n\nAfter Sorting\n");
 for(i=0;i<n;i++)
 printf("\t%d",a[i]);
 getch();

}