/*
 * Get_ASCII_Value.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// Write C Program to Find ASCII Value of a Character
int main()
{
	unsigned char ch;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of G = %d",ch);
}
