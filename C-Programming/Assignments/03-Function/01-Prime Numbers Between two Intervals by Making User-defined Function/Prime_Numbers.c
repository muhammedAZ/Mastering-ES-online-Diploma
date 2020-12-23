/*
 * Prime_Numbers.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Muhammed
 */

#include <stdio.h>
//Prime Numbers Between two Intervals by Making User-defined Function
int check_prime (int num);
int main()
{
	int num1,num2,i,flag;
	printf("Enter two numbers(intervals) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Prime numbers between 10 and 30 are: ");
	for(i = num1 + 1 ; i < num2 ; i++)
	{
		flag = check_prime(i);
		if(flag == 0)
		{
			printf("%d ",i);
		}
	}

	return 0;

}
int check_prime (int num)
{
	int j ,flag = 0;

	for( j = 2 ;j <= num/2 ;j++)
	{
		if(num%j == 0)
		{
			flag = 1;
			break;
		}

	}
	return flag;

}
