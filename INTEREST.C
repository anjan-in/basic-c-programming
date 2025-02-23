/*
* C program to calculate simple interest using switch statement.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int time,choice,n;
	float principal,rate,interest_amount,total_amount;
	clrscr();

	printf("\n\n\t Enter the Principal amount : ");//input principal
	scanf("%f",&principal);
	printf("\n\t Enter the Yearly interest rate : ");//input rate
	scanf("%f",&rate);
	printf("\n\t Enter the Time period in year : ");//input time
	scanf("%d",&time);

	printf("\n\n\n\t Press 1 to Calculate Simple interest");
	printf("\n\t Press 2 to Calculate Compound interest");
	printf("\n\n\t Enter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		//calculate simple interest
		case 1: interest_amount = (principal * time * rate) / 100;
		//print the resultant value of S.I
		printf("\n\t Simple Interest of Rs. %0.2f for %d years is Rs. %0.2f",principal,time,interest_amount);
		break;

		case 2:	printf("\n\t Enter the number of times the given Interest is compounded : ");
		scanf("%d",&n);
		total_amount = principal * pow((1 + (rate / (100 * n))), (n * time));
		interest_amount = total_amount - principal;
		//print the resultant C.I
		printf("\n\t Compound Interest of Rs. %0.2f for %d years is Rs. %0.2f",principal,time,interest_amount);
		break;
	}
	getch();
	return 0;
}
