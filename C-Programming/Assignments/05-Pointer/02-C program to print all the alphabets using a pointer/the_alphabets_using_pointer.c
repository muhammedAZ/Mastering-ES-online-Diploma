/*
 * the_alphabets_using_pointer.c
 *
 *  Created on: Feb 10, 2021
 *      Author: Muhammed
 */

#include<stdio.h>
//Write a program in C to print all the alphabets using a pointer.
int main()
{
	char str[27];
	int i;
	char *p;
	p = str;
	for(i = 0 ; i < 26 ; i++)
	{
		*p = i + 'A';
		p++;
	}
	p = str;
	printf("The alphabets are :\n");
	for(i = 0 ; i < 26 ; i++)
	{
		printf(" %c ",*p);
		p++;
	}

}

