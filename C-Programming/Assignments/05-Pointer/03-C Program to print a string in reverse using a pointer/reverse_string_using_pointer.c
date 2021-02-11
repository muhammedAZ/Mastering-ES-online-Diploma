/*
 * reverse_string_using_pointer.c
 *
 *  Created on: Feb 10, 2021
 *      Author: Muhammed
 */

#include<stdio.h>
#include<string.h>
//Write a program in C to print a string in reverse using a pointer
int main()
{
	int len,i;
	char str[25];
	char *p;
	p = str;
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(p);
	len=strlen(p);
	printf("Reverse of the string is :");
	for(i=len;i>=0;i--)
	{
		printf("%c",*(p+i));
	}

}

