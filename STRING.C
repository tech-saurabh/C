#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	int size,i;
	clrscr();
	label:
	printf("Enter the size of string:");
	scanf("%d",&size);
	printf("Enter the string:");
	scanf("%s",&string);
	for(i=0;i<size;i++)
	{
		if(string[i]!='a' && string[i]!='b')
		{
			printf("Invalid string...\n");
			goto label;
		}
	}
	if(string[0]=='a')
	{
		printf("valid string");
	}
	else
	{
		printf("invalid string");
	}
	getch();

}