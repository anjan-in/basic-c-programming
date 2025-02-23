/* Program to print first ten even natural numbers. */
#include<stdio.h>
main()
{
	int i=0;
	int j=2;
	do
	{
		printf("\n%d",j);
		j=j+2;
		i=i+1;
	}
	while(i<10);
	return 0;
}
