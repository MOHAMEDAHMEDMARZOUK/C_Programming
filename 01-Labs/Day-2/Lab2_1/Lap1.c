#include <stdio.h>

void main()
{
	int hour ;
	float salary ;
	
	printf("please enter your working hour : ");
	scanf("%d", &hour); 
	
	if ( hour >= 40 )
	{
		salary = hour * 50 ;
	}
	
	else {salary = (hour * 0.9)* 50 ; }
	
	
	printf("salary = %.01f\n", salary);
	}