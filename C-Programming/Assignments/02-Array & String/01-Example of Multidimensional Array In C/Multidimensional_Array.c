/*
 * Multidimensional_Array.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//Write a C program to find sum of two matrix of order 2 * 2
int main()
{
	float matrix1[2][2],matrix2[2][2],sum[2][2];
	int r,c;
	printf("Enter the elements of 1st matrix \n");
	for(r = 0; r < 2; r++)
	{
		for(c = 0; c < 2; c++)
		{
			printf("Enter matrix1 %d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix1[r][c]);
		}
	}
	printf("Enter the elements of 2nd matrix \n");
		for(r = 0; r < 2; r++)
		{
			for(c = 0; c < 2; c++)
			{
				printf("Enter matrix2 %d%d : ",r+1,c+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&matrix2[r][c]);
			}
		}
			for(r = 0; r < 2; r++)
			{
				for(c = 0; c < 2; c++)
				{
					sum[r][c] = matrix1[r][c] + matrix2[r][c];
				}
			}
			printf("Sum Of Matrix:\n");
			for(r = 0; r < 2; r++)
			{
				for(c = 0; c < 2; c++)
				{
					printf("%.1f\t",sum[r][c]);
				}
				printf("\n");
			}


}
