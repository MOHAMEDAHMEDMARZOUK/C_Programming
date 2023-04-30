#include <stdio.h>

void main(void)
{
	int num1,num2;
	
	printf("Please Enter number one : ");
	scanf ("%d",& num1 );
	
	printf("Please Enter number Two : ");
	scanf ("%d",& num2 );
	
	printf("num1 + num2 = %d\n",num1+num2);
	printf("num1 - num2 = %d\n",num1-num2);
	printf("num1 & num2 = %d\n",num1&num2);
	printf("num1 | num2 = %d\n",num1|num2);
	printf("num1 ^ num2 = %d\n",num1^num2);
	
}