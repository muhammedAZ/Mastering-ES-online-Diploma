#include<stdio.h>
void Reverse();
int main()
{
	printf("Enter a sentence: ");
	Reverse();
	return 0;
}
void Reverse()
{
	char str ;
	scanf("%c",&str);
	if(str != '\n')
	{
		Reverse();
		printf("%c",str);
	}
}