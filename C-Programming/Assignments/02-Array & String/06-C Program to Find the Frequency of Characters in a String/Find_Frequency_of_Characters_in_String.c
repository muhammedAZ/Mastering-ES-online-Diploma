/*
 * Find_Frequency_of_Characters_in_String.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Find the Frequency of Characters in a String
int main()
{
	char str[30], ch ;
	int i, sum = 0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] == ch )
		{
			sum++;
		}
	}
	printf("Frequency of %c = %d",ch,sum);
}
