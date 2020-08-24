#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
class record
{
	int roll;
	char name[25];
	public:
	void inputData()
	{
	 cout<<"Enter Roll: ";
	 cin>>roll;
	 cout<<"Enter his/her name: ";
	 gets(name);

	}//inputData function closed
	int getRoll(int r)
	{ return r;
	}
	void save()
	{
		ofstream fileout;
		fileout.open("Data.txt",ios::app);
		fileout<<"\n==================================\nRoll: "<<roll;
		fileout<<"\nName: "<<name<<endl;
		cout<<"\n\nData Successfully saved....\n";
		fileout.close();
	}//save function closed
	void modify()
	{

		char name1[32];
		cout<<"\nEnter new Name: (type n to rename the old name)\n";
		gets(name1);
		if(strcmp(name1,"n")!=0)
		{
			strcpy(name,name1);
		}
	}//modify function closed
	void display()
	{
	 cout<<"\nRoll: "<<roll;
	 cout<<"\nName: "<<name;
	}//display function closed

};
void main()
{   clrscr();
     record obj;
	int ch,s;
     do{  clrscr();
	cout<<"\t\t\t\tSTUDENT MANAGEMENT SYSTEM \n";
	cout<<"\n\n1.Add New Records\n2.View Details\n3.Edit Records\n4.Display all records\n5.Exit\n\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:	{       cout<<"Enter Details:\n";
				obj.inputData();
				cout<<"\n\t\t\tPress 1 to save this record\n"; cin>>s;
				if(s==1)
				{
				obj.save();
				cout<<"\n\n\t\tData Successfully saved.....\n";
				}
				else
				cout<<"\n\n\t\tData is not saved.....\n";

				break;
			} //case 1 add new records closed
	     case 2: {
			int sroll;
			cout<<"\nEnter roll to search: "; cin>>sroll;
			 if(obj.getRoll(sroll)==sroll)
				 obj.display();
			 else
			 cout<<"\nSearched not found......\n";
			 break;

			}//case 2 to display records
	     /*	case 3: {
				 obj.inputData();
				 break;
			}//case 3 to edit the record
			*/
		case 4: {       char chread;
				ifstream filein;
				filein.open("Data.txt",ios::in);
				clrscr();
				cout<<"\nAll details are:\n";
				 while(filein.get(chread))
				 {
				  cout<<chread;
				 }
				filein.close();
				break;

			}//case 4 to display all record
		case 5: continue; break;
		default:cout<<"\nInvalid Option choosen\n";
	}
	getch();
       }while(ch!=5);//while loop closed
     cout<<"\n\nThanks for choosing us.....\n";
     getch();

}