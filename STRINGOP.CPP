#include<iostream.h>
#include<conio.h>
#include<string.h>
class OperatorOverloading
{
 char s1[500];
 public:
 void getString(char s[])
 {
   strcpy(s1,s);
 }
 void show()
 {
	cout<<s1;
 }
 OperatorOverloading operator +(OperatorOverloading s)
 {
   OperatorOverloading temp;
   strcat(s1 , s.s1);
   strcpy(temp.s1 , s1);
   return temp;
 }
}obj1,obj2,obj3;

void main()
{
  clrscr();
  obj1.getString("First String");
  obj2.getString("Second String");

  cout<<"\nString 1 :";
  obj1.show();
  cout<<"\nString 2: ";
  obj2.show();
  obj3=obj1 + obj2;
  cout<<"\nString Concat Value: ";
  obj3.show();
  getch();
}