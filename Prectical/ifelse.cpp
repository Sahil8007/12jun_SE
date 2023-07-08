/*
	< Less then
	> greater then
	>= Greater then Equal to
	<= Less then Equal to
	!= Not Equal to
	== Double Equal to 
*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter Value of a:");
	scanf("%d",&a);
	if(a != 0)
	{
		printf("Positive");
	}
	else
	{
		printf("\nNegative");
	}
	if(a <= 0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
	if(a >= 0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
	if(a < 0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
		if(a > 0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
		if(a == 0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
	return 0;
}
