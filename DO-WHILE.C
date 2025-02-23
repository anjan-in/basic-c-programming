/*
** w.a.p to print even numbers between 1 to 20 using do-while loop.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int i=0;
	int j=2;
	clrscr();
	printf("Even numbers b/w 1 to 20 are as follows:\n");

	do
	{
		printf("%d\n",j);
		j=j+2;
		i=i+1;
	}while(i < 10);
	//printf("The above numbers are even numbers.\n");
	return 0;
}