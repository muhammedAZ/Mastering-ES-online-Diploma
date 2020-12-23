/*
 * Swap_without_temp.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// Write Source Code to Swap Two Numbers without temp variable.
int main()
{
	float a ,b ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a = a + b ;
	b = a - b ;
	a = a - b ;
	// After swapping
	printf("\nThe value of a is : %f\nThe value of b is : %f",a,b);
	a = a * b ;
	b = a / b ;
	a = a / b ;
	// After swapping
	printf("\nThe value of a is : %f\nThe value of b is : %f",a,b);

}
