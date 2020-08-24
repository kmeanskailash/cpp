#include<stdio.h>
#include<conio.h>
int fact(int n)
{ int f=1;
  if(n<=1)
  return 1;
  else
  f=n*fact(n-1);
  return f;

}
void main()
{ int x,res;
 clrscr();
 printf("Enter any number:");
 scanf("%d",&x);
 res=fact(x);
 printf("Factorial=%d",res);
 getch();
}