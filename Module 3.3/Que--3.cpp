#include<stdio.h>
int main()
{
	float pi=3.14;
	int r,l,h,w,b,ch,area;
	printf("1.Circle\n2.Rectangle\n3.Tringle");
	printf("\nEnter Your Required Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter The Value Of Redius :");
			scanf("%d",&r);
			area=pi*r*r;
			printf("Area Of Circle Is = %d",area);
			break;
		case 2:
			printf("Enter The Value Of Lenght :");
			scanf("%d",&l);
			printf("Enter The Value Of Width :");
			scanf("%d",&w);
			printf("Area Of Rectengle Is =%d",l*w);
			break;
		case 3:
			printf("Enter The Value Of base :");
			scanf("%d",&b);
			printf("Enter The Value Of Hieght :");
			scanf("%d",&h);
			printf("Area Of Triangle Is =%d",h*b/2);
			break;
	}
}
