#include <stdio.h>

void main(void)
{
	int height, row, space, star;
	int stauts ; 
	
do {

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (row = 1; row <= height; row++) 
	{
        for (space = 1; space <= height - row; space++) 
		    { printf(" "); }
	
        for (star = 1; star <= 2 * row - 1; star++) 
		    { printf("*"); }
       
	   printf("\n");
    }
	
	printf("\n\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );

}