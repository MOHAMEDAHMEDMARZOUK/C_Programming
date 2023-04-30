#include <stdio.h>

void main(void)
{
	int number;
	int counter = 0 ;
	int constant = 12;
	int stauts ; 
	
do {
	
	printf("\nEnter the number to display its multiplication table :  ");
	scanf("%d",&number);
	
	for (counter ; counter < constant ; counter++)
	{
		printf("%d * %d  = %d \n",number , counter+1 , (number * (counter+1) )); 
	}
	
	
	printf("\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );	
}