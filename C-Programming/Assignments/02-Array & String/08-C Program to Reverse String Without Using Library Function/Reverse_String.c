/*
 * Reverse_String.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
#include<string.h>
//C Program to Reverse String Without Using Library Function
int main()
{
	char str[100], temp;
	int i, j ;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets (str);
	i = 0;
	j = strlen(str)	- 1;
	while (i < j)
	{
		temp = str[i] ;
		str[i] = str[j] ;
		str[j] = temp;
		i++;
		j--;
	}
	printf("Reverse string is:%s",str);
}

