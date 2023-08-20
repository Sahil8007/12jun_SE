#include<stdio.h>
int main()
{
    int num,a,b,max=0;
    printf("Enter the number :");
    scanf("%d",&num);
    b = num;
    while (num > 0)
    {
        a = num % 10;
     if (a>max)
		{
            max = a;
        }
        num = num/10;
    }
    printf("Max is a :%d",max);
    return 0;
}
