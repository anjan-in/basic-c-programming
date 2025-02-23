/* w.a.p to award grades to students. */
#include<stdio.h>
main()
{
	int result;
	printf("Enter the total marks of a student:\n");
	scanf("%d",&result);

	if(result <=50)
		puts("Grade D\n");
	else if(result <=60)
		printf("Grade C\n");
	else if(result <=75)
		printf("Grade B\n");
	else
		printf("Grade A\n");
	return 0;
}