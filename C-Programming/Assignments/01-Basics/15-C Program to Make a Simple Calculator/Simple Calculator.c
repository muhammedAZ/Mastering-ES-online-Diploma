/*
 * Simple Calculator.c
 *
 *  Created on: Nov 20, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
// C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
int main()
{
	float num1 , num2 ,sum;
	char op;
	printf("Enter two operands :");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1,&num2);
	printf("Enter operator :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	switch(op){
		case '+':
				sum = num1+num2;
				printf("sum = %.1f",sum);break;
		case '-':
				sum = num1-num2;
				printf("sum = %.1f",sum);	break;
		case '/':
				sum = num1/num2;
				printf("sum = %.1f",sum);break;
		case '*':
				sum = num1*num2;
				printf("sum = %.1f",sum);break;
		default:
				printf("wrong entry");
	}

}
