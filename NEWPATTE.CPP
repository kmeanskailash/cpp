#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,row;
 clrscr();
 cout<<"Number of Rows: ";
 cin>>row;
 cout<<endl;
 for(i=1;i<=row;i++)
 {
	for(j=row;j>=i;j--)
	cout<<"*";

	for(int k=1;k<2*i;k++)
	{  if(k==1)
	    continue;
	cout<<" ";
	}
	for(int l=row;l>=i;l--)
	cout<<"*";

	cout<<endl;
 }
  for(i=1;i<=row;i++)
 {
	for(j=1;j<=i;j++)
	cout<<"*";

	for(int k=row;k>=i;k--)
	{
	cout<<" ";
	}
	for(k=row-1;k>i;k--)
	cout<<" ";
	for(int l=1;l<=i;l++)
	cout<<"*";

	cout<<endl;
 }
 getch();
}