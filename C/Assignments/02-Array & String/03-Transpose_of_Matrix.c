#include<stdio.h>
int main()
{
	int arr[10][10], t[10][10];
	int r ,c;
	printf("Enter row and col :");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);
	for(r = 0 ; r < 2 ; r++)
	{
		for(c = 0 ; c < 3 ; c++)
		{
			printf("Enter element arr%d%d :\n",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[r][c]);
		}
	}
	printf("This matrix is :\n");
	for(r = 0 ; r < 2 ; r++)
	{
		for(c = 0 ; c < 3 ; c++)
		{
			printf("%d\t",arr[r][c]);
			
		}
		printf("\n");
	}
	printf("The transpoes is :\n");
	for(r = 0 ; r < 3 ; r++)
	{
		for(c = 0 ; c < 2 ; c++)
		{
			t[r][c] = arr[c][r];
			printf("%d\t",t[r][c]);
			
		}
		printf("\n");
	}
	
}