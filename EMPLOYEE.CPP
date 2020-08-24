#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class emp
{
	private:
	int empno,salary;
	char name[32];
	public:
	void input()
	{
	 cout<<"Enter empno: ";
	 cin>>empno;
	 cout<<"Name: ";
	 gets(name);
	 cout<<"Enter Salary: ";
	 cin>>salary;
	}
	void display()
	{
	  cout<<"\nEmpNo: "<<empno;
	  cout<<"\nName: "<<name;
	  cout<<"\nSalary: "<<salary;
	}
	int search(int eno)
	{
	 return eno;
	}
}obj;
void main()
{
 clrscr();
 fstream file("a.txt",ios::in);
 obj.input();
 obj.display();
 file.write((char *)&obj ,sizeof(obj));
 cout<<"Data successfully saved....";
 file.close();
 getch();
}