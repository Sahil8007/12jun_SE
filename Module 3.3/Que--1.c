#include<stdio.h>
int max();
int main()
{
   max();
}
int max()
{
    int array[5];
    int i,max;
    printf("Enter the any five numbers");
    for(i=0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    max = array[0];
    for(i=0; i<5; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
    }
    printf("max number is the %d",max);
    return 0;
}
