#include<stdio.h>
// C Program to Calculate Sum of Natural Numbers
int main()
{
	unsigned short i , sum ,n;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i = 0 ; i <= n ; i++)
	{
		sum += i ;
	}
	printf("Sum = %d",sum);
}