/*
** w.a.p to find factorial of the given number using while loop.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int x;
	long int fact=1;
	clrscr();
	printf("Enter any number to find factorial:\n"); // read the number
	scanf("%d",&x);

	while(x > 0)
	{
		fact=fact*x; //factorial calculation
		x=x-1;
	}
	printf("Factorial is %ld",fact);
	return 0;
}