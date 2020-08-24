#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class emp
{
	public:
	int eno,salary;
	char name[25];
	void input()
	{
	 cout<<"Enter empNo: ";
	 cin>>eno;
	 cout<<"Enter Name: ";
	 gets(name);
	 cout<<"Enter Salary: ";
	 cin>>salary;
	}
	int empno(int n)
	{
	 return eno;
	}
}obj;
void main()
{
 clrscr();
 fstream file("emp.dat",ios::in);
 int sno;
 cout<<"Enter Emp Code to find details:\n";
 cin>>sno;


   while(!file.eof())
   {
      file.read((char *)&obj,sizeof(obj));
      if(obj.empno(sno)==sno)
      {
      cout<<"\n=================================";
      cout<<"\nEmpNo: "<<obj.eno;
      cout<<"\nEmp Name: "<<obj.name;
      cout<<"\nSalary: "<<obj.salary;
      break;
      }
   }

   file.close();
 getch();
}