#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int choice, n; // Variable declaration
	clrscr();
	printf("Enter any number: \n");
	scanf("%d",&n);
	printf("\nChoice are as follows:\n");
	printf("1:Calculate the square of the number.\n");
	printf("2:Calculate the cube of the number.\n");
	printf("3:&4:To find the square root of the number.\n\n");

	printf("Enter your choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Square of the number is %d \n",n*n);
		break;
		case 2:printf("Cube of the number is %d \n",n*n*n);
		break;
		case 3://printf("Square root of the number is %f\n",sqrt(n));
		//break;
		case 4:printf("Square root of the given number is %.2f\n",sqrt(n));
		break;
		default:printf("The number is %d.\n",n); // Output Statement
	}
	return 0;
}