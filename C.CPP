#include<iostream.h>
#include<conio.h>
void main(int args[])
{
 int i;
i=args[0];
int f=1,l;
for(l=1;l<=i;l++)
f=f*l;
cout<<"Factorial of <<i<<" is "<<f;

}