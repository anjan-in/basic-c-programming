/*
** w.a.p to print first n natural numbers using for loop.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int i,n; // Variable declaration
	clrscr();
	printf("Enter value of n \n");  // read the number
	scanf("%d",&n);
	printf("\nThe first %d natural numbers are:\n",n);

	for(i=1;i<=n;++i)
	{
		printf("%d\n",i); // Output Statement
	}
	return 0;
}