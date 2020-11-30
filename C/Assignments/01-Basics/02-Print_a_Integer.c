#include<stdio.h>
// Write C Program to Print a Integer Entered by a User
int main()
{
	unsigned short x;
	printf("Enter a integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
}