/*
 * pointer_to_array.c
 *
 *  Created on: Feb 10, 2021
 *      Author: Muhammed
 */

#include<stdio.h>
//Write C Program to show a pointer to an array which contents are pointer to structure.
struct employee
{
	char *empname;
	int empid;
};

int main()
{
	static struct employee emp1={"Jhon",1001},emp2={"Alex",1002},emp3={"Taylor",1003};
	struct employee(*arr[])={&emp1,&emp2,&emp3};
	struct employee(*(*pt)[3])=&arr;

	printf("Exmployee Name : %s \nEmployee ID :  %d",(**(*pt+1)).empname,(*(*pt+1))->empid);


	return 0;
}
