/*
 * Print_a_Integer.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// Write C Program to Print a Integer Entered by a User
int main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
}
