#include<stdio.h>
int main()
{
    char s[30];
    int i,count=0;
    printf("Enter the value of string :");
    scanf("%s",&s);
    for (i = 0;s[i]!=0; i++)
    {
        count++;
    }
    printf("Lenght of string is %d",count);
	return 0;
}
