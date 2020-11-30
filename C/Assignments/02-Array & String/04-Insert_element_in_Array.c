#include<stdio.h>
int main()
{
	int arr[100] ,ele , num ,i ,location;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for(i = 0 ; i < num ; i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ele);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for(i = num ; i >= location ; i--)
	{
		arr[i] = arr[i - 1];
	}
	num++;
	arr[location - 1] = ele ;
	for(i = 0 ; i < num ; i++)
	{
		printf("%d",arr[i]);
	}
	
}