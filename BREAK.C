#include<stdio.h>
#include<conio.h>

main()
{
	int num,i; // Variable declaration
	clrscr();
	printf("Enter any number:\n");
	scanf("%d",&num);

	for(i=2;i<=num;i++)
	{
	    if((num % i) == 0)
	    {
		printf("Smallest divisor for number %d is %d",num,i); //o/p st.
		break;
	    }
	}
	return 0;
}