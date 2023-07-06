#include<stdio.h>

int main()
{
	int s,a;
	printf("Enter Valau of s:");
	scanf("%d",&s);
	printf("Enter valau of a:");
	scanf("%d",&a);
	printf("Addition of s and a is : %d",s+=a);
	printf("\nSubstraction of s and a is : %d",s-=a);
	printf("\nMultiplication of s and a is :%d",s*=a);
	printf("\nModule of s and a is : %d",s%=a);
	printf("\nDivison of s and a is : %d",s/=a);
	return 0;
}
