#include <stdio.h>

void main()
{
	int max_number = 10;
	int counter = 0 ;
	int sum = 0 ;
	int num ;
	int stauts ; 
	float avr ;
	
do {
	printf("\n\nplease enter 10 numbers \n");
	
	for (counter ; counter < max_number ; counter++)
	{
		printf("Number %d : ",counter+1 );
		scanf("%d", &num);
		sum += num ; 
	}
	
	avr = (float)sum / max_number ;
	
	printf("The sum of numbers = %d\n"  , sum);
	printf("The avr of numbers = %.2f\n", avr);
	
	printf("Enter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );
	
	}