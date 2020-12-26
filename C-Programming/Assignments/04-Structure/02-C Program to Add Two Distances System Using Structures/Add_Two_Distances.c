/*
 * Add_Two_Distances.c
 *
 *  Created on: Dec 26, 2020
 *      Author: Muhammed
 */

#include<stdio.h>
//C Program to Add Two Distances (in inch-feet) System Using Structures
struct Sdistances
{
	int feet;
	float inch;

}d,sum;
int main()
{
	int i;
	for (i = 0; i < 2; ++i)
	{
		printf("Enter information for %d.distance \n",i+1 );
		printf("Enter feet : " );
		fflush(stdin);fflush(stdout);
		scanf("%d",&d.feet);
		printf("Enter inch : " );
		fflush(stdin);fflush(stdout);
		scanf("%f",&d.inch);
		sum.feet += d.feet;
		sum.inch += d.inch;
	}
	if (sum.inch > d.feet)
	{
		sum.inch -= d.feet;
		++sum.feet;
	}
	printf("sum of distance = %d\'-%.1f\"",sum.feet,sum.inch );

}
