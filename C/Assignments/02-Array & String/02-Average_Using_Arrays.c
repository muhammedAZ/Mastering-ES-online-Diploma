#include<stdio.h>
int main()
{
	float arr[6],avg = 0;
	int i,size;
	printf("Enter number of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i = 0 ; i < size ; i++)
	{
		printf("%d. Enter number :\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		avg += arr[i];
	}
	printf("Average = %.2f",avg/size);
}

