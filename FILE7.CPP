#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int pos;
	char n[25],read[25];
	clrscr();
	printf("Enter Show name: ");
	scanf("%s",&n);
	fp=fopen("show.txt","w");
	fprintf(fp,"Show time: %s",n);
	printf("\n\nData successfully saved...");
	 fclose(fp);
	getch();
	clrscr();
	fp=fopen("show.txt","r");
	pos=ftell(fp);
	printf("file pointer at position %d\n",pos);
	fseek(fp,11,0);
	fscanf(fp,"%s",&read);
	printf("%s",read);
	fclose(fp);
	getch();

}