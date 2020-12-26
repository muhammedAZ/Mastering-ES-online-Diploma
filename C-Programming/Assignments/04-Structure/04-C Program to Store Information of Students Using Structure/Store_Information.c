/*
 * Store_Information.c
 *
 *  Created on: Dec 26, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Store Information of Students Using Structure
struct Sinformation
{
	char name[10];
	float marks;
}Student[10];
int main()
{
	int i;
	printf("Enter information of students: \n");
	for (i = 0; i < 2; ++i)
	{
		printf("\nFor roll number %d\n",i+1);
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		gets(Student[i].name);//scanf("%s",&Student[i].name);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Student[i].marks);
	}
	printf("\nDisplaying information of students: \n");
	for (i = 0; i < 2; ++i)
	{
		printf("\nInformation for roll number %d : \n",i+1 );
		printf("\nName = %s\nMarks = %.1f\n",Student[i].name,Student[i].marks);
	}

	return 0;
}
