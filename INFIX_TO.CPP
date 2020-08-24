//program to convert infix expression to postfix expression
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch, stack[50],infix[50];
 int i,j,t=0;
 clrscr();
 stack[0]='(';
 printf("\nInfix to Postfix Expression\n");
 printf("\nEnter infix Operation\n");
 gets(infix);
 j=strlen(infix);
 printf("\nPostfix Expression is: ");
 for(i=0;i<j;i++)
 {
	ch=infix[i];
	if((ch>='0')&&(ch<='9') ||
	   (ch>='a')&&(ch<='z') ||
	   (ch>='A')&&(ch<='Z') )
	   printf("%c",ch);
	if(ch=='(')
	stack[++t]=ch;
	if((ch=='*')||(ch=='/'))
	{
	  while((stack[t]=='*') ||(stack[t]=='/'))
	  printf("%c",stack[t--]);
	  stack[++t]=ch;
	}
	if((ch=='+') ||(ch=='-'))
	{
	  while((stack[t]=='*') || (stack[t]=='/') ||
		(stack[t]=='+') || (stack[t]=='-') )
		printf("%c",stack[t--]);
		stack[++t]=ch;
	}
	if(ch==')')
	{
	 while(stack[t]!='(')
	 printf("%c",stack[t--]);
	}
	while(stack[t]!='(')
	printf("%c",stack[t--]);

 }//outer for loop closed
 getch();
}