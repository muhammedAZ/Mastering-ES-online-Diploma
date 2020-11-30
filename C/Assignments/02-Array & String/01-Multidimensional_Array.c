#include<stdio.h>
int main()
{
	float first_matrix[2][2] , second_matrix[2][2], sum[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix :\n ");
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			printf("Enter first_matrix%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&first_matrix[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix :\n ");
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			printf("Enter second_matrix%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&second_matrix[i][j]);
		}
	}
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			sum[i][j] = first_matrix[i][j] + second_matrix[i][j];
			printf("%.1f\t",sum[i][j]);
			if(j == 1)
			{
				printf("\n");
			}
		}
		
	}
	
}
