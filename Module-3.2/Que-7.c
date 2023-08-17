#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,num;
	printf("Enter Your Choice Number=");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d\n",a);
		a=b;
		b=c;
		c=a+b;
		}
}
