/*
** w.a.p to calculate the net salary, if a tax of 15% is levied on his Gross
** salary if it exceeds Rs.10000/- per month.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	float gross_salary, net_salary; // Variable declaration
	clrscr();
	printf(" Enter Gross Salary of an employee: \n");
	scanf("%f",&gross_salary);

	if(gross_salary < 10000)
		net_salary = gross_salary;
	if(gross_salary >=10000)
		net_salary = gross_salary - 0.15 * gross_salary;
	printf("\n Net Salary is Rs.%.2f\n", net_salary);
	return 0;
}