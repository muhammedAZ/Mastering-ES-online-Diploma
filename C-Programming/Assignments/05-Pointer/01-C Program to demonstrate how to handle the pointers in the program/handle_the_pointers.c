/*
 * handle_the_pointers.c
 *
 *  Created on: Feb 10, 2021
 *      Author: Muhammed
 */

#include<stdio.h>
//Write a program in C to demonstrate how to handle the pointers
int main()
{
	int m = 29;
	int *ab;

	printf("Address of m : %p\nValue of m : %d\n",&m,m);
	ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %p\nContent of pointer ab : %d\n",ab,*ab);
	m = 34;
	printf("The value of m assigned to %d now.\n",m);
	printf("Address of pointer ab : %p\nContent of pointer ab : %d\n",ab,*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value %d now.\n",*ab);
	printf("Address of m : %p\nValue of m : %d\n",&m,m);

}
