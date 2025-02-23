/*
*C program to calculate the daily wages of 7 workers at an hourly basis of Rs. 100/- with a constraint
*/

#include<stdio.h>
#include<string.h>

//Structure Declaration
struct worker
{
	char name[25];
	int hours;
	int wages;
};

int main()
{
	int i;
	char date[12];
	//Structure Array Declaration
	struct worker w[7];
	clrscr();

	//Declared 7 workers name who worked in an Iron and Hardware Shop
	strcpy(w[0].name, "Vivek Mehta");
	strcpy(w[1].name, "Rahul Ranjan");
	strcpy(w[2].name, "Kamlesh Yadav");
	strcpy(w[3].name, "Manoj Kumar");
	strcpy(w[4].name, "Prakash Dey");
	strcpy(w[5].name, "Shubham Kumar");
	strcpy(w[6].name, "Arup Sharma");

	printf("\n\t Enter the Date [DD-MM-YYYY] : ");
	gets(date);

	// Input Total working hours for each worker
	for(i=0;i<7;i++)
	{
		do
		{
			printf("\n\t Enter the Total working hours of %s : ", w[i].name);
			scanf("%d", &w[i].hours);
			if(w[i].hours <= 4)
			{
				w[i].wages = w[i].hours * 100;
			}
			else
			{
				printf("\n\t Wrong Input - Allow maximum upto 4 hours per day for each worker");
			}
		}
		while(w[i].hours > 4);
	}

	// Display the wages pay to each worker
	printf("\n\t Date - %s", date);
	for(i=0;i<7;i++)
	{
		printf("\n\t\t\t\t Name - %s", w[i].name);
		printf("\n\t\t\t\t Wages - %d\n", w[i].wages);
	}
	return 0;
}



