/*
 * Swap_Two_Numbers.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// Write Source Code to Swap Two Numbers
int main()
{
	float a ,b ,temp;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;

	// After swapping
	printf("\nThe value of a is : %f\nThe value of b is : %f",a,b);
}
