#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{         clrscr();
	fstream file("vowel.txt",ios::in);
	char ch[10];
	int v=0;
	cout<<"Your file content:\n\n";
	while(!file.eof())
	{
	file.getline(ch,2);
	cout<<ch;
	if(strcmp(ch,"a")==0)
	v++;
	}
	cout<<"\nTotal no of a="<<v;
	getch();
	file.close();
}