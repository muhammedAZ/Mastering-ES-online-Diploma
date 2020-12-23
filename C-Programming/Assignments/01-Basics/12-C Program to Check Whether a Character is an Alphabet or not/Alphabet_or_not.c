/*
 * Alphabet_or_not.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Check Whether a Character is an Alphabet or not
int main()
{
	char ch;
	while(1)
	{
		printf("Enter a character: ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&ch);
		fflush(stdin);fflush(stdout);
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			printf("%c is an alphabet\n",ch);
		}
		else
		{
			printf("%c is not an alphabet \n",ch);
		}
	}
}
