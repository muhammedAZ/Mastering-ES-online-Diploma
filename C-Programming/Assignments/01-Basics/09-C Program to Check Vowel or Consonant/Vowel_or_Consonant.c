/*
 * Vowel_or_Consonant.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Check Vowel or Consonant
int main()
{
	unsigned char ch;
	while(1)
	{
		printf("Enter an alphabet: ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&ch);
		fflush(stdin);fflush(stdout);
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			printf("%c is a vowel\n",ch);
		}
		else
		{
			printf("%c is a Consonant\n",ch);
		}
	}
}
