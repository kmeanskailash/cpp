#include<iostream.h>
#include<conio.h>
class queue
{
	int f,r,q[5];
	public:
	queue()
	{
	f=0;
	r=0;
	}
	void insrear();
	void delfront();
	void display();
};
void queue::insrear()
{
 if(r==5)
 cout<<"Queue is full. No insertion possible";
 else
 {
	cout<<"Enter No.: ";
	cin>>q[r];
	r++;
 }
}
void queue::delfront()
{
	if(f==r)
	cout<<"No element exist in the Queue";
	else
	{
		cout<<q[f]<<" deleted from the Queue ";
		for(int i=1;i<r;i++)
		q[i-1]=q[i];
		r--;
	}
}
void queue::display()
{
	if(r==0)
	cout<<"Queue is Empty. Nothing to Display";
	else
	{
		for(int i=f;i<r;i++)
		cout<<q[i]<<"\t";

	}
}
queue obj;
void main()
{
 clrscr();
 int ch;
 do
 {
	clrscr();
	cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter Your choice: ";
	cin>>ch;
	switch(ch)
	{
	 case 1:obj.insrear(); break;
	 case 2:obj.delfront(); break;
	 case 3:obj.display(); break;
	 case 4: continue;
	 default:cout<<"Wrong choice...";
	}
	getch();
 }while(ch!=4);
 getch();
}