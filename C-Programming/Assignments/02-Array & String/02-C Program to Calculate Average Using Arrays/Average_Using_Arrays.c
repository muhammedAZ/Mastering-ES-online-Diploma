/*
 * Average_Using_Arrays.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Calculate Average Using Arrays
int main()
{
	float arr[20],avg,num;
	int size,i;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("%d. Enter number :  ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		num += arr[i];
	}
	printf("Average = %.2f",avg = num/size);

}
