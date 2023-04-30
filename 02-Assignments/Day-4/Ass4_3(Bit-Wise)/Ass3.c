#include <stdio.h>
#include <stdlib.h>

int set_Bit    (int Reg , int Bit );
int clr_Bit    (int Reg , int Bit );
int toggle_Bit (int Reg , int Bit );
int get_Bit    (int Reg , int Bit );


void main (void)
{
	int id;
	int Reg ;
	int Bit ;
	int stauts;
	
do {
	
	system("cls");
	printf("**** Welcome to simple Bit Wisa Calculator\n");
	printf("1-set_Bit \t  2-clr_Bit\n3-toggle_Bit \t 4-get_Bit");
	printf("\nEnter The Number of the operation : ");
	scanf("%d",&id);
	switch (id)
	{
		case 1:
			printf("Please enter the Regester Value : ");  scanf("%d",&Reg);
			printf("Please enter the Bit number : ")    ;  scanf("%d",&Bit);
			
			printf("The Result is : %d", set_Bit(Reg , Bit));
			break;
		case 2:
			printf("Please enter the Regester Value : ");  scanf("%d",&Reg);
			printf("Please enter the Bit number : ")    ;  scanf("%d",&Bit);
			
			printf("The Result is : %d",clr_Bit(Reg , Bit));
			break;
		case 3:
			printf("Please enter the Regester Value : ");  scanf("%d",&Reg);
			printf("Please enter the Bit number : ")    ;  scanf("%d",&Bit);
			
			printf("The Result is : %d",toggle_Bit(Reg , Bit));
			break;
		case 4:
			printf("Please enter the Regester Value : ");  scanf("%d",&Reg);
			printf("Please enter the Bit number : ")    ;  scanf("%d",&Bit);
			
			printf("The Result is : %d",get_Bit(Reg , Bit));
			break;
		
		default: printf("Non Available Choise");
	}
	
	printf("\n\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );
}

int set_Bit    (int Reg , int Bit )
{
	return ( Reg | ( 1 << Bit ) ) ;
}

int clr_Bit    (int Reg , int Bit )
{
	return ( Reg & (~( 1 << Bit )) ) ;
}

int toggle_Bit (int Reg , int Bit )
{
	return ( Reg ^ ( 1 << Bit ) ) ;
}

int get_Bit    (int Reg , int Bit )
{
	return ( 1 & ( Reg >> Bit ) ) ;
}
