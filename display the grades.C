/*
* Using file handling, C program to compute the total marks and
* average marks and display the grades by reading the file stu.dat
*/

#include<stdio.h>

// Create the result structure
struct result
{
	char subject_code[10];
	int marks;
};

// Create the student structure
struct student
{
	char enrolment_no[10];
	char name[25];
	struct result sem_I[7];
};

int main()
{
	FILE *fp;	// Declare the file pointer
	struct student s;
	int i, total_marks, average_marks;

	// Open the existing file stu.dat using fopen()
	// in read mode using "r" attribute
	fp = fopen("stu.dat","r");

	// Check if this filePointer is null
	// which maybe if the file does not exist
	if(fp == NULL)
	{
		printf("\nError! Can not open output file");
	}
	else
	{
		while(fread(&s, sizeof(s), 1, fp))
		{
			// Print the Students information
			printf("\n\n Enrolment No - %s", s.enrolment_no);
			printf("\n Name - %s", s.name);
			total_marks = 0;
			for(i=0;i<7;i++)
			{
				total_marks = total_marks + s.sem_I[i].marks;
			}
			average_marks = total_marks / 7;
			printf("\n Total Marks - %d", total_marks);
			printf("\n Average Marks - %d", average_marks);

			if(average_marks >= 40 && average_marks < 60)
			printf("\n Grade - D");
			else
			if(average_marks >= 60 && average_marks < 70)
			printf("\n Grade - C");
			else
			if(average_marks >= 70 && average_marks < 80)
			printf("\n Grade - B");
			else
			if(average_marks >= 80 && average_marks < 90)
			printf("\n Grade - A");
			else
			if(average_marks >= 90 && average_marks <= 100)
			printf("\n Grade - E");
		}
		// Closing the file using fclose()
		fclose(fp);
	}
	return 0;
}