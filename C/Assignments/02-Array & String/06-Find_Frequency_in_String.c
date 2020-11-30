#include<stdio.h>
int main()
{
	char str[30], ch ;
	int i, sum = 0;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] == ch )
		{
			sum++;	
		}
	}
	printf("Frequency of %c = %d",ch,sum);
	
}