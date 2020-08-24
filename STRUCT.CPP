#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Employee
{ char Name[32],Department[50],Designation[50];
  float Salary;
};


//Input Data:-

int i;
Employee s[5];

void Inputdata()
{	for(i=0;i<5;i++)
   {cout<<"\nEmployee "<<i+1<<endl;
    cout<<"\n\nEnter Your Name : ";
    gets(s[i].Name);
    cout<<"\nEnter Your Department : ";
    gets(s[i].Department);
    cout<<"\nEnter Your Designation : ";
    gets(s[i].Designation);
    cout<<"\nEnter Your Salary : ";
    cin>>s[i].Salary;

cout<<"Do You Want to Enter Another Detail (Y/N) ??? ";
char ch;
cin>>ch;
   if(ch=='n'||ch=='N')
   return;
   }
}

// Display Data :-

void Displaydata()
{
    int j;
    for(j=0;j<=i;j++)
    { cout<<"\nDetails of Employee "<<j+1<<endl;
      cout<<"\nName : "<<s[j].Name;
      cout<<"\nDepartment : "<<s[j].Department;
      cout<<"\nDesignation : "<<s[j].Designation;
      cout<<"\nSalary : "<<s[j].Salary;
     }
}

// Main Function:-

void main()
{	clrscr();
	Inputdata();
	getch();
	clrscr();
	Displaydata();
	getch();
}
