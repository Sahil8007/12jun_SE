#include<stdio.h>
int main()
{
	int a[10],i,even=0,odd=0,ne=0,nod=0;
//	int count=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Any 10 Numbers");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if((a[i] % 2) == 0)
		{
			printf("\nEven is= %d", a[i]);
			even +=a[i];
			ne++;
		}
		else if((a[i]%2)!=0)
		{
			printf("\nOdd is=%d",a[i]);
			odd += a[i];
			nod++;
		}
	}
	printf("\n No of Even =%d,\tNo Of odd=%d",ne,nod);
	printf("\n Even =%d,\tOdd =%d",even,odd);
}
