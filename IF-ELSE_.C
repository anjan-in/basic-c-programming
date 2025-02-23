#include<stdio.h>
#include<conio.h>

main()
{
	int x; // Variable declaration
	clrscr();
	printf("\n\nEnter a number: ");
	scanf("%d",&x);

	if(x % 2 == 0)
		printf("\n%d is even number", x); // Output Statement
	else
		printf("\n%d is odd number", x);
	return 0;
}