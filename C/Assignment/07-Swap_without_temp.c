#include<stdio.h>
// Write Source Code to Swap Two Numbers without temp variable.
int main()
{
	float a ,b ,temp;
	printf("Enter value of a:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	printf("The value of a is : %f\nThe value of b is : %f",a,b);
	a = a + b ;
	b = a - b ;
	a = a - b ;
	// After swapping
	printf("\nThe value of a is : %f\nThe value of b is : %f",a,b);
}