
#include <stdio.h>
void main (void)
{
	/*
	char num = 20 , i ;
	
    i = printf("the num = %d\n",num );
	printf("ii = %d\n",i );
	
	num = 200 ;
	i = printf("the num = %d\n",num );
	printf("ii = %d\n",i );
	
	num = 2000 ;
	i = printf("the num = %d\n",num );
	printf("ii = %d\n",i ); */
	
	unsigned int num1 , num2 ;
	printf("enter two numbers \n");
	scanf ("%d",&num1 );
	scanf ("%d",&num2 );
	printf("sum of two num = %d \n",( num1 + num2) );
	printf("sub of two num = %d \n",( num1 - num2) );
	printf("mli of two num = %d \n",( num1 * num2) );
	printf("div of two num = %f \n",( (float)num1 / num2) );
}