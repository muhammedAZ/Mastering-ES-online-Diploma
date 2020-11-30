#include<stdio.h>
//Write C Program to Check Whether a Number is Even or Odd
int main()
{
	short num ;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num %2 == 0)
	{
		printf("%d is Even",num);
	}
	else
	{
		printf("%d is Odd",num);
	}
}