#include<stdio.h>
#include<conio.h>

main()
{
	int result; // Variable declaration
	clrscr();
	printf("Enter the Total marks of a student:\n");
	scanf("%d",&result);

	if(result <= 50)
		printf("Grade D\n"); // Output Statement
		else if (result <=60)
			printf("Grade C\n");
			else if (result <=75)
				printf("Grade B\n");
				else
					printf("Grade A\n");
	return 0;
}