#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
		printf("\nEnter The Value Of Array[%d][%d]=",i,j);
		scanf("%d,%d",&a[i][j]);
			}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;	
}	

