#include<stdio.h>
int main()
{
   int no,firstdigit,lastdigit,sum=0;
   printf("Enter the number :");
   scanf("%d",&no);
   lastdigit = no%10;
   while (no>=10)
   {
      no=no/10;
   }
   firstdigit = no;
   sum = firstdigit + lastdigit;
   printf("Summation of first and last digit is : %d",sum);
}
