#include<iostream.h>
#include<conio.h>
struct record
{
	int empno;
	char empname[25];
	record *link;
}*first,*last;
char ch='y';
int main()
{
  clrscr();
  first=last=NULL;
  record *temp;
  do
  {
  temp=new(record);
  if(temp==NULL)
  { cout<<"Overflow"; return 0;}
  cout<<"\nEnter Empno: ";
  cin>>temp->empno;
  cout<<"\nEnter EmpName: ";
  cin>>temp->empname;
  temp->link=NULL;
  if(first==NULL)
  {
   first=last=temp;
  }
  else
  {
	last->link=temp;
	last=temp;
  }
  cout<<"Data inserted";
  cout<<"\nDo you want to add more??(y)";
  cin>>ch;
  }while(ch=='y'||ch=='Y');
   temp=first;
   cout<<"\nAll Details are:\n";
   while(temp->link!=NULL)
   { cout<<"\nEmpNO:"<<temp->empno;
     cout<<"\tEmpName:"<<temp->empname;
     cout<<endl;
     temp=temp->link;

   }
  getch();
  return 0;
}