#include<stdio.h>
int main()
{
	int a;
	printf("Here Are Some Brands SmartPhones Deatils\n1.OnePlus\n2.Vivo\n3.Iphone\n4.Asus\n5.Google\n6.Samsung");
		printf("\nChoose Brand As Per Your Requirment :");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("1.OnePlus 10T 5G -> 71,999 \n2.OnePlus 11 5G -> 64,999\n3.OnePlus 11R 5G -> 44,999\n4.OnePlus Nord 3 5G -> 37,999\n5.OnePlus Nord CE 3 Lite 5G -> 19,999");
	break;	
	case 2:
		printf("1.Vivo V27 Pro 5G -> 42,999\n2Vivo X90 Pro 5G -> 84,999\n3.Vivo V21 5G -> 32,999\n4.Vivo X60 Pro 5G -> 54,990\n5.Vivo Y100 5G -> 23,999");
	break;
	case 3:
		printf("1.iPhone 14 Pro Max -> 1,39,900\n2.iPhone 14 Plus -> 89,900\n3.iPhone 13 Mini -> 64,900\n4.iPhone 12 -> 59,900\n5.iPhone SE -> 49,900\n6.iPhone 14 Pro -> 1,29,900");
		break;
	case 4:
		printf("1.ROG Phone 7 Ultimate -> 99,999\n2.ROG Phone 6 -> 71,999\n3.ROG Phone 6 Pro -> 89,999\n4.ROG Phone 5s -> 57,999\n5.Asus 8z -> 42,999");
	break;
	case 5:
		printf("1.Google Pixel 7A 5G -> 43,999\n2.Google Pixel 7 Pro -> 71,999\n3.Google Pixel 6 Pro -> 39,900\n4.Google Pixel 6 -> 25,499\n5.Google Pixel 5 -> 15,999 ");
	break;
	case 6:
		printf("1.Samsung Z Fold 4 -> 1,54,999\nGalaxy Z Flip 3 -> 49,999\n3.Galaxy S23 Ultra -> 1,24,999\n4.Galaxy S22 Ultra -> 1,02,999\n5.Galaxy A54 -> 40,999");
		break;
default :
	printf("\nMore Brands Will Be Added Soon...");
}	return 0; 
}
