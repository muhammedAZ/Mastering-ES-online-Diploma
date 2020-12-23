/*
 * Reverse_Sentence.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C program to Reverse a Sentence Using Recursion
void Reverse();
int main()
{
	printf("Enter a sentence: ");
	Reverse();
	return 0;
}
void Reverse()
{
	char str ;
	fflush(stdout);
	scanf("%c",&str);
	if(str != '\n')
	{
		Reverse();
		printf("%c",str);
	}
}
