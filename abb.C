#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	int size,i,state=0;
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
	for(i=0;i<size;i++)
	{
		switch(state)
		{
			case 0:if(string[i]=='a')
				{
					state=1;
					break;
				}
				else
				{
					state=0;
					break;
				}
			case 1: if(string[i]=='b')
				{
					state=2;
					break;
				}
				else
				{
					state=1;
					break;
				}
			case 2: if(string[i]=='b')
				{
					state=3;
					break;
				}
				else
				{
					state=1;
					break;
				}
			case 3: if(string[i]=='a')
				{
					state=1;
					break;
				}
				if(string[i]=='b')
				{
					state=0;
					break;
				}
		}
	}
	if(state==3)
	{
		printf("valid string");
	}
	else
	{
		printf("invalid string");
	}
	getch();
}