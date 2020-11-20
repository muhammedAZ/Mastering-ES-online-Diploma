#include<stdio.h>
// C Program to Check Whether a Character is an Alphabet or not
int main()
{
	unsigned char ch ;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	if((ch >= 'a' && ch <= 'z') || 
	   (ch >= 'A' && ch <= 'Z'))
	{
		printf("%c is an alphabet",ch);
	}
	else
	{
		printf("%c is not an alphabet ",ch);
	}
}