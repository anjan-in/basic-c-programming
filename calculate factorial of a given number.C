/* w.a.p to calculate factorial of a given number */
#include<stdio.h>
main()
{
	int x;
	long int fact=1;
	printf("Enter any number to find factorial:\n");
	scanf("%ld",&x);
	while(x > 0)
	{
		fact=fact*x;
		x=x-1;
	}
	printf("Factorial is %ld",fact);
	return 0;
}