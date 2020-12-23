/*
 * Factorial.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Find Factorial of a Number
int main()
{
	int num, i;
	unsigned int fact = 1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num > 0)
	{
		for(i = 1; i <= num; i++)
		{
			fact *= i;
		}
		printf("Factorial - - %d",fact);
	}
	else
	{
		printf("Error! ! ! Factorial of negative number doesn't exist ");
	}
}
