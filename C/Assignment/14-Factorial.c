#include<stdio.h>
//C Program to Find Factorial of a Number
int main()
{
	unsigned long i ,fact ,n;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n > 1)
	{
		
		for(fact = 1, i = 1 ; i <= n ; i++)
		{
			fact *= i;
		}
		printf("Factorial - - %d\n",fact);
	}
	else 
	{
		printf("Error! ! ! Factorial of negative number doesn't exist .\n",fact);
	}
}