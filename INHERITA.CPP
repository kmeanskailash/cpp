#include<iostream.h>
#include<conio.h>
class A
{ public:
   void disP()
   {
	cout<<"This is class A in public section";
   }
 protected:
  void dispA()
  {
   cout<<"This is class A protected section";
  }
};
class B:public A
{  public:
   void disp()
   { cout<<"This is class B ";
       dispA();
   }
}objB;
void main()
{
 clrscr();
 objB.disp();
 objB.disP();
 getch();
}