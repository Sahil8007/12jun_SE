#include<stdio.h>

int main()
{
	int a,b,add,sub,div,multi,mod;
	printf("Enter valau of a:");
	scanf("%d",&a);
	printf("Enter valau of b:");
	scanf("%d",&b);
	add=a+b;
	printf("Addition of a and b is:%d",add);
	sub=a-b;
	printf("\nSubtraction of a and b is:%d",sub);
	div=a/b;
	printf("\nDivison of a and b is:%d",div);
	multi=a*b;
	printf("\nMultiplication of a and b is:%d",multi);
	mod=a%b;
	printf("\nModule of a and b is:%d",mod);
	return 0;
}
