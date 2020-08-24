#include<iostream.h>
#include<conio.h>
void midSum(int a[][10],int c, int r)
{
 int sum=0;
 for(int i=0;i<r;i++)
 {
	for(int j=0;j<c;j++)
	{
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
 }
 //sum of middle term
 for(i=0;i<c;i++)
 {
  sum=sum+a[r/2][i];
 }
 cout<<"Sum="<<sum;

}
void main()
{
 clrscr();
 int y[10][10],c,r;
 cout<<"Enter column ";
 cin>>c;
 cout<<"Enter Row ";
 cin>>r;
 for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>y[i][j];
		}
	}
	midSum(y,c,r);
	getch();

}