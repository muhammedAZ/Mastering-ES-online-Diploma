#include<stdio.h>
void func();
int main()
{
	func();	
}
void func()
{
	unsigned short i ,j ;
	for(i = 0; i <= 9 ; i++)
	{
		for(j = i ; j <= 9 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}