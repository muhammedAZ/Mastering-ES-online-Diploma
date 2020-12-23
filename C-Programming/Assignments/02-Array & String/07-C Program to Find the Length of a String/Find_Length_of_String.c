/*
 * Find_Length_of_String.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Find the Length of a String
int main()
{
	char str[20];
	int i = 0 , sum = 0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	while(str[i] != '\0')
	{
		i++;
		sum++;
	}
	printf("Length of string: %d",sum);
}
