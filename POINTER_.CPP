#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 int a[5]={10,20,30,40,50},*ptr;
 ptr=a;
 cout<<"All elements are:\n";
 for(int i=0;i<5;i++)
 {
  cout<<ptr[i]<<"\t";

 }
 getch();

}