#include<stdio.h>
// C Program to Check Whether a Number is Positive or Negative
int main()
{
	float num;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num > 0)
	{
		printf("%f is positive",num);
	}
	else if(num < 0)
	{
		printf("%f is negative",num);
	}
	else
	{
		printf("%f is zero",num);
	}
	
}