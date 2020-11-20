#include<stdio.h>
// C Program to Check Vowel or Consonant
int main()
{
	unsigned char ch;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	    ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' || ch == 'U' )
	{
		printf("%c is a Vowel\n",ch);
	}
	else
	{
		printf("%c is a Consonant",ch);
	}
	
}