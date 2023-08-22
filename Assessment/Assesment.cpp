#include<stdio.h>
void Addition()
{
	int a,b;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf("Addition Of Digits Is :%d",a+b);
}
void Subtraction()
{
	int a,b;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf("Subtraction Of Digits Is :%d",a-b);
}
void Multiplication()
{
	int a,b;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf("Multiplication Of Digits Is :%d",a*b);
}
void Divison()
{
	int a,b;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf("Divison Of Digits Is :%d",a/b);
}
int main()
{
	int ch,a,b;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		Addition();
			break;
		case 2:
			Subtraction();
			break;
			case 3:
				Multiplication();
				break;
			case 4:
				Divison();
				break;
		default :
			printf("Please Enter Valid Choice...");
			break;
	}
	return 0;
}
