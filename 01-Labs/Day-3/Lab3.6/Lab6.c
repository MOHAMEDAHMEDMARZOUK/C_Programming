#include <stdio.h>

void main(void)
{
	int number;
	int counter = 1 ;
	int fac = 1 ;
	int stauts ; 
	
do {
	
	printf("\nEnter the number o calculate the factorial :  ");
	scanf("%d",&number);
	
	if ( number == 0 )
	{  printf("The factorial of %d = 1\n"  , number); }
	
	else {
		
	while ( counter <= number )
	{   fac *= counter ;
		counter ++;         
	}
	   printf("The factorial of %d = %d\n"  ,number, fac);
	}
	
	printf("\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );	
}