#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int m,n,no=0,a=1,rem;
  cout<<"Enter any decimal number: ";
  cin>>n;
  m=n;
  while(n!=0)
  {
     rem=n%2;
     no=no+rem*a;
     n=n/2;
     a=a*10;
  }
  cout<<"The value of "<<m<<" in binary is "<<no;
  getch();
}