#include<stdio.h>
int main()
{
	char str[20];
	int i = 0 , sum = 0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&str);
	while(str[i] != '\0')
	{
		i++;
		sum++;
	}
	printf("Length of string: %d",sum);
}