#include <stdio.h>

void main(void)
{
	int answer;
	int constant = 12 ;
	int stauts ; 
	
do {
	
	printf("Enter the answer of 3 x 4 = ");
	scanf("%d",&answer);
	
	while(answer != constant)
	{
		printf("Not correct, Please try again: ");
		scanf("%d",&answer);
	}
	
	printf("Thank You\n");
	
	printf("Enter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );	
}