/*
 * reverse_elements_of_array.c
 *
 *  Created on: Feb 10, 2021
 *      Author: Muhammed
 */

#include<stdio.h>
//Write a program in C to print the elements of an array in reverse order.
int main()
{
	int arr[15],size,i;
	int *p;
	printf("Enter the size of array :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	printf("Enter the elements of array : \n");
	for(i = 0; i < size ; i++)
	{
		printf("element-%d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	p = &arr[size - 1];
	printf("the elements of array in reverse : \n");
	for(i = size; i > 0; i--)
	{
		printf("element-%d : %d \n",i,*p);
		p--;
	}

}

