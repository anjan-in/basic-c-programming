/* w.a.p that perform to illustrate switch statement. */
#include<stdio.h>
#include<math.h>
main()
{
	int choice,n;
	printf("Enter any no.");
	scanf("%d",&n);

	printf("Chioce is as follows:\n");
	printf("1. To find square of the no.\n");
	printf("2. To find square-root of the no.\n");
	printf("3. To find cube of the no.\n");
	printf("4. To find square-root of the no.\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("Square of the no. is %d\n",n*n);
		break;
		case 2:
		case 4:printf("Square-root of the no. is %.2f\n",sqrt(n));
		break;
		case 3:printf("Cube of the number is %d\n",n*n*n);
		break;
		default:printf("The number you had given is %d\n",n);
		break;
	}
	return 0;
}
