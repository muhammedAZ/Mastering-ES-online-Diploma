/*
 * Calculate_Power_of_Number.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C program to Calculate the Power ofa Number Using Recursion
int power(int num1 , int num2);
int main()
{
	int base , exp;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&exp);
	printf("%d^%d = %d",base,exp,power(base,exp));
	return 0;
}
int power(int base , int exp)
{
	if(exp != 0)
		return (base * power(base,exp - 1));

	else
		return 1;

}
