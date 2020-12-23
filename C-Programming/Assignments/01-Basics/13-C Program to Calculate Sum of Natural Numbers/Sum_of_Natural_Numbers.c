/*
 * Sum_of_Natural_Numbers.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// C Program to Calculate Sum of Natural Numbers
int main()
{
	int i , sum ,n;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++)
	{
		sum += i ;
	}
	printf("Sum = %d",sum);
}
