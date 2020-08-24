#include<iostream.h>
#include<conio.h>
int t=-1,stack[5];
void push()
{
  if(t>4)
  cout<<"Stack is full";
  else
  {
   t=t+1;
   cout<<"Enter no to be inserted: ";
   cin>>stack[t];
   cout<<"NO inserted successfully";
  }
}
void pop()
  {
	if(t==-1)
	cout<<"Stack is empty";
	else
	{ t=t-1;

	}
  }
  void disp()
  {
    int i;
    cout<<
    "All stack element are:\n";
    for(i=t;i>=0;i--)
    {
    cout<<"\n"<<stack[t];
    t=t-1;
    }
    getch();
  }
void main()
{  int ch;

      do
      {  clrscr();
	cout<<"\n1.PUSH\n2.POP\n3.Display\n4.Exit\n\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:push();break;
		case 2:pop();break;
		case 3:disp(); break;
		case 4:continue;
		default: cout<<"\nInvalid option ";
	}
       }while(ch!=4);


  getch();
}