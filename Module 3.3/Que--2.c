#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("1.Addition\n2.Subtraction\n3.Divison\n4.Multiplication\n5.Modulo");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	printf("Enter The Value Of A =");
	scanf("%d",&a);
	printf("Enter The Value Of B =");
	scanf("%d",&b);
	switch(ch)
	{
		case 1:
			printf("Addition Is =%d",a+b);
			break;
		case 2:
			printf("Subtraction Is =%d",a-b);
			break;
		case 3:
			printf("Divison Is =%d",a/b);
			break;
		case 4:
			printf("Multiplication Is =%d",a*b);
			break;
		case 5:
			printf("Modulo Is =%d",a%b);
			break;
			default :
				printf("Please Enter Valid Value...");
	}
	return 0;
}

