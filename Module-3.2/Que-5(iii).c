#include<stdio.h>
int main()
{
	int s,i;
	printf("Enter Value Of Your Choice :");
	scanf("%d",&s);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",s,i,s*i);
	}
	return 0;
}
