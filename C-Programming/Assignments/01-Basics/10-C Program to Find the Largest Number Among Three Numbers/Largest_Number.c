/*
 * Largest_Number.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// C Program to Find the Largest Number Among Three Numbers
int main()
{
	float num1 ,num2 ,num3;
	printf("Enter three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("Largest number %.2f",num1);
		}
		else
		{
			printf("Largest number %.2f",num3);
		}
	}
	else
	{
		if(num2 > num3)
		{
			printf("Largest number %.2f",num2);
		}
		else
		{
			printf("Largest number %.2f",num3);
		}
	}
}
