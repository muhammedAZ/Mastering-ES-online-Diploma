/*
 * Even_or_Odd.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//Write C Program to Check Whether a Number is Even or Odd
int main()
{
	int num;
	while(1)
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num);
		fflush(stdin);fflush(stdout);
		if(num%2 == 0)
		{
			printf("%d is even\n",num);
		}
		else
		{
			printf("%d is odd\n",num);
		}
	}
	return 0;
}
