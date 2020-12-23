/*
 * lab.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
int main()
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
