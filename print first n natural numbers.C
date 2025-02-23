/* Program to print first n natural numbers */
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	printf("\nThe first %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
	return 0;
}