/*w.a.p to calculate an Air Ticket Fare. */
#include<stdio.h>
main()
{
	int age;
	float fare;
	printf("Enter the age of passenger:\n");
	scanf("%d",&age);
	printf("Enter the Air Ticket Fare:");
	scanf("%f",&fare);

	if(age < 14)
		fare = fare - 0.5*fare;
	else
	if(age <=50)
	{
		fare = fare - 0.1*fare;
	}
	else
	{
		fare = fare - 0.2*fare;
	}
	printf("\nAir Ticket fare to be charged after discount is %.2f\n",fare);
	return 0;
}