#include<stdio.h>
int Addition(int a,int b)
{
	printf("Addition Is :%d",a+=b);
}
int Subtraction(int a,int b)
{
	printf("Subtraction Of Digits Is :%d",a-b);
}
int Multiplication(int a,int b)
{
	printf("Multiplication Of Digits Is :%d",a*b);
}
int Divison(int a,int b)
{
	printf("Divison Of Digits Is :%d",a/b);
}
int main()
{
	int ch;
	int x,y;
	printf("Enter First Number :");
	scanf("%d",&x);
	printf("Enter Second Number :");
	scanf("%d",&y);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		Addition(x,y);
			break;
		case 2:
			Subtraction(x,y);
			break;
			case 3:
				Multiplication(x,y);
				break;
			case 4:
				Divison(x,y);
				break;
		default :
			printf("Please Enter Valid Choice...");
			break;
	}
	return 0;
}
