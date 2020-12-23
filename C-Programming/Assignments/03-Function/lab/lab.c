/*
 * lab.c
 *
 *  Created on: Dec 10, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
void func();
int main()
{
	func();
}
void func()
{
	int i ,j ;
	for(i = 0; i <= 9 ; i++)
	{
		for(j = i ; j <= 9 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
