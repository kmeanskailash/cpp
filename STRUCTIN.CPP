#include<iostream.h>
#include<conio.h>
struct A
{
 protected:
 void dispA()
 { cout<<"this is class A in protected section";
 }
};
struct B:public A
{
  public:
  void disp()
  {
     dispA();
  }
}obj;
void main()
{
 clrscr();
 obj.disp();
 getch();
}