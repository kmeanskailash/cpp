#include<iostream.h>
#include<conio.h>
void bsearch(int z[],int no,int item)
{
	int l=0,h=no-1,mid;
	while(l<=h)
	{   mid=(l+h)/2;
		if(z[mid]==item)
		{
		cout<<"\nItem "<<item<<" is found at position "<<mid+1;
		return ;
		}
		if(item>z[mid])
		l=mid+1;
		else
		h=mid-1;
	}
	cout<<"\nItem "<<item<<" not found in the list >>>>>";
}
void main()
{
	clrscr();
	int a[100],n,search;
	cout<<"Enter no. of element want to insert : \n";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nElement want to search: ";
	cin>>search;
	bsearch(a,n,search);
	getch();
}