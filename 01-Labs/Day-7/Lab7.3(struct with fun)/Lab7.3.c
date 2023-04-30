#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num1 ;
	int num2 ;
	
} swap_numbers ;


swap_numbers fun_swaping ( int a ,int b );



void main(void)
{
	int n1,n2 ;
	
	printf("Please enter num 1  : ");  scanf("%d",&n1);
	printf("Please enter num 2  : ");  scanf("%d",&n2);
	
	printf("your befor = %d  \n",n1); printf("your befor = %d  \n\n",n2);
	
	swap_numbers s1 = fun_swaping(n1 , n2 );
	n1 = s1.num1 ;
	n2 = s1.num2 ;
	
	
	printf("your after = %d  \n",n1); printf("your after = %d  \n",n2);
	
}

swap_numbers fun_swaping ( int a ,int b )
{
	swap_numbers temp ;
	temp.num1 = b ;
	temp.num2 = a ;
	return temp ;
}