/*
 * Store_Information.c
 *
 *  Created on: Dec 26, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Store Information(name, roll and marks) of a Student Using Structure
struct Sinformation
{
	char name[5];
    int roll;
	float marks;
}Student;
int main()
{
	printf("Enter Information of a Students: \n");
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(Student.name);//scanf("%s",&Student.name);
	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Student.roll);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Student.marks);
	printf("\nDisplaying Information :\n");
	printf("name : %s\nroll : %d\nmarks : %.2f",Student.name,Student.roll,Student.marks);
	return 0;
}

