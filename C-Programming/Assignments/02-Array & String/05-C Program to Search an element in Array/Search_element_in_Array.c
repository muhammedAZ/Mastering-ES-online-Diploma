/*
 * Search_element_in_Array.c
 *
 *  Created on: Nov 30, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Search an element in Array
int main()
{
	int arr[10], size , i,element ;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i = 0 ; i < size ; i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);
	for(i = 0 ; i < size ; i++)
	{
		if(arr[i] == element)
		{
			printf("Number found at the location = %d ",i+1);
		}
	}

}
