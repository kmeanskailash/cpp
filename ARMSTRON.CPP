#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,temp,i,sum=0;
 cout<<"Enter any number: ";
 cin>>n;
 temp=n;
 while(n!=0)
 {  i=n%10;
   sum=sum + i*i*i;
    n=n/10;


 }
 if(sum==temp)
 {
  cout<<temp<<"this is armstrong number";
 }
 else
 { cout<<temp<<" is not a armstrong number";
 }
 getch();
}