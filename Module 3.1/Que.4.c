#include<stdio.h>
#include<math.h>
int main()
{
	int Principal,Time;
	float Rate,Interest;
	printf("Enter The Amount Of Loan :");
	scanf("%d",&Principal);
	printf("Enter The Interest Of Loan :");
	scanf("%f",&Rate);
	printf("Enter The Time Of Loan :");
	scanf("%d",&Time);
	Interest= Principal*Rate*Time/100;
	printf("\n The Simple Interes is :%f", Interest);
	
	return 0;
}
