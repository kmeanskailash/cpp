#include<conio.h>
#include<iostream.h>
int a[5],f=0,r=0;
void Insert();
void Delete();
void Display();
void main()
{
 int ch;
 do
 { clrscr();
   cout<<"\nQueue Operation:\n\n1.Add element \n2.Delete Element\n3.Display Element\n4.Exit\n\n\nEnter Your choice: ";
   cin>>ch;
   switch(ch)
   {
    case 1:Insert(); break;
    case 2:Delete(); break;
    case 3:Display(); break;
    case 4:continue;
    default:cout<<"\n\nWrong Choice....";
   }
  getch();
 }while(ch!=4);

}
void Insert()
{
 if(r==5)
 cout<<"Queue is Full";
 else
 {
  cout<<"Enter No. ";
  cin>>a[r];
  r++;
 }
}
void Delete()
{
	if(r==0)
	cout<<"Queue is Empty";
	else
	{
	 cout<<a[r]<<" deleted ";
	 for(int i=0;i<r;i++)
	 a[i-1]=a[i];
	 r--;
	}
}
void Display()
{
	if(r==0)
	cout<<"No element exist";
	else
	{
	 for(int i=f;i<r;i++)
	 cout<<"\t"<<a[i];
	}
}