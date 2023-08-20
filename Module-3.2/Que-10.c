#include<stdio.h>
int main()
{
    int num,a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num > 0)
    {
        a = num % 10;
        sum += a;
        num = num/10;
    }
    printf("Summation is a: %d",sum);
}
