#include<stdio.h>
// C Program to Find the Largest Number Among Three Numbers
int main()
{
	float num1 ,num2 ,num3;
	printf("Enter three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("Largest number %g",num1);
		}
		else
		{
			printf("Largest number %g",num3);
		}
	}
	else
	{
		if(num2 > num3)
		{
			printf("Largest number %g",num2);
		}
		else
		{
			printf("Largest number %g",num3);
		}
	}
}