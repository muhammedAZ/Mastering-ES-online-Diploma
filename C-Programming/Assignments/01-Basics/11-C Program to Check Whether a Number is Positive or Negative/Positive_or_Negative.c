/*
 * Positive_or_Negative.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Check Whether a Number is Positive or Negative
int main()
{
	float num;

	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&num);
		fflush(stdin);fflush(stdout);

		if(num > 0)
		{
			printf("%.2f is positive\n",num);
		}
		else if(num < 0)
		{
			printf("%.2f is Negative\n",num);
		}
		else
		{
			printf("You entered zero\n");
		}
	}
}

