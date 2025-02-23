/*
* C program to provide string functions.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char string[100], c1, c2;
	int choice, i, count = 0;
	clrscr();

	printf("\t Enter the string : ");
	gets(string);

	printf("\n\t Press 1 to replace a character in a given String with a\n\t Character suggested by the User");
	printf("\n\n\t Press 2 to convert the given String into Upper case");
	printf("\n\n\t Press 3 to convert the alternate character into Upper case");
	printf("\n\n\t Press 4 to check each and every Character in the String and\n\t display whether it is an Alphabet, Digit or Special character");
	printf("\n\n\t Enter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		printf("\n\t Enter the Character you want to replace : ");
		fflush(stdin);
		scanf("%c",&c1);
		printf("\n\t Enter the replacement Character suggested by the User : ");
		fflush(stdin);
		scanf("%c",&c2);
		for(i=0; string[i]!='\0'; i++)
		{
			if(string[i] == c1)
			{
				string[i] = c2;
				count++;
			}
		}
		if(count == 0)
		printf("\n\t Character Not Found");
		else
		printf("\n\t New String - %s", string);
		break;

		case 2:
		for(i=0; string[i]!='\0'; i++)
		{
			string[i] = toupper(string[i]);
		}
		printf("\n\t New String - %s", string);
		break;

		case 3:
		for(i=0; string[i]!='\0'; i++)
		{
			if(i%2 == 0)
			{
				string[i] = toupper(string[i]);
			}
			else
			{
				string[i] = tolower(string[i]);
			}
		}
		printf("\n\t New String - %s", string);
		break;

		case 4:
		for(i=0; string[i]!='\0'; i++)
		{
			if(isalpha(string[i]))
				printf("\n\t %c - Alphabet", string[i]);
			else
			if(isdigit(string[i]))
				printf("\n\t %c - Digit", string[i]);
			else
			if(isspace(string[i]))
				printf("\n\t %c - Space", string[i]);
			else
				printf("\n\t %c - Special Character", string[i]);
		}
		break;
	}
	return 0;
}