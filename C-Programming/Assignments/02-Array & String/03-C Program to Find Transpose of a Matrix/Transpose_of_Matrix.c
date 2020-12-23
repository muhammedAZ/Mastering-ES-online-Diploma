/*
 * Transpose_of_Matrix.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Find Transpose of a Matrix
int main()
{
	int matrix[5][5] ,t[5][5];
	int r, c;
	printf("Enter rows and column of matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix : \n");
	for(r = 0; r < 2; r++)
	{
		for(c = 0; c < 3; c++)
		{
			printf("Enter elements matrix %d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[r][c]);
		}
	}
	printf("Entered Matrix : \n");
	for(r = 0; r < 2; r++)
	{
		for(c = 0; c < 3; c++)
		{
			printf("%d\t",matrix[r][c]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
	for(r = 0; r < 3; r++)
	{
		for(c = 0; c < 2; c++)
		{
			t[r][c] = matrix[c][r];
			printf("%d\t",t[r][c]);
		}
		printf("\n");
	}


}
