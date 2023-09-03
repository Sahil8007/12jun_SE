#include <stdio.h>
void Addition(int a,int b)
{
	printf("\nEnter The First Number :");
	scanf("%d",&a);
	printf("\nEnter The Second Number :");
	scanf("%d",&b);
	printf("\nAddition Is :%d",a+b);
}
void Subtraction(int a,int b)
{
	printf("\nEnter The First Number :");
	scanf("%d",&a);
	printf("\nEnter The Second Number :");
	scanf("%d",&b);
	printf("\nSubtraction Is :%d",a-b);
}
void Divison(int a,int b)
{
	printf("\nEnter The First Number :");
	scanf("%d",&a);
	printf("\nEnter The Second Number :");
	scanf("%d",&b);
	printf("\nDivison Is :%d",a/b);
}
void Multiplication(int a,int b)
{
	printf("\nEnter The First Number :");
	scanf("%d",&a);
	printf("\nEnter The Second Number :");
	scanf("%d",&b);
	printf("\nMultiplication Is :%d",a*b);
}
int main() 
{
    int ch;
	int x,y;
    while (1){
        printf("\nMenu\n");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Divison");
        printf("\n5. Exit\n");		
        printf("\nEnter Your Choice:");
        scanf("%d", &ch);
        switch (ch) 
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
            case 5:
            	printf("\nExiting The  Program, ThankYou...");
            	return 0;
            default:
                printf("\nInvalid Choice. Please Enter A Valid Option.\n");           
        }
    }
    return 0;
}
