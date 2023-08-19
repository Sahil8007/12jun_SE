#include<stdio.h>
int main()
{
	int i,n,f;
	printf("Enter The Value Of Number :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f*=i;
	}
	printf("%d",f);
}
