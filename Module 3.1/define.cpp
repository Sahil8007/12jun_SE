#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	int r;
	float area;
	printf("Enter Radius Of Circle :");
	scanf("%d",&r);
	area = pi*pow((float )r,2);
	printf("\nArea Of Circle is :%f",area);
	return 0;
}
