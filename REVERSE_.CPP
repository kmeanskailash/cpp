#include<iostream.h>
#include<conio.h>
void reverse(int a[],int size)
{
 int s=size,temp;
 for(int i=0;i<size/2;i++)
 {
   temp=a[i];
   a[i]=a[s-1];
   a[s-1]=temp;
   s--;
 }
 //display elements
 cout<<"\nAll elements are:\n";
 for(i=0;i<size;i++)
 cout<<"\t"<<a[i];
}
void main()
{
	clrscr();
	int arr[10],n;
	cout<<"Enter No. of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	reverse(arr,n);
	getch();
}
