#include <stdio.h>
#include <stdlib.h>

// swap by : global Temp variable
void Swap_GTemp (void);

// swap by : global Equation variable
void Swap_GEqua (void);

// swap by : global XOR variable
void Swap_GXOR (void);

// swap by : call by refrance 
//void Swap_refrance (int &n1 ,int &n2 );

// swap by : call by pointer 
void Swap_pointer( int *n1 , int *n2 );

int num1 ;
int num2 ;

void main (void)
{
	int id;
	int Bit ;
	int a , b ;
	int stauts;
	
do {
	
	system("cls");
	printf("\n***** Welcome to swap System  *****\n");
	printf("1-swap by : global variables \n2-swap by : calling by pointer");
	printf("\nEnter The Number of the operation : ");
	scanf("%d",&id);
	
switch (id)
{
	case 1:
	    printf("\n***** Welcome to swap System by : global variables  *****\n");
	    printf("1-global Temp \n2-global Equation \n3-global XOR");
	    printf("\nEnter The Number of the operation : ");  scanf("%d",&Bit);
		
		printf("Please enter the first  number : ");  scanf("%d",&a);
		printf("Please enter the second number : ");  scanf("%d",&b);
		num1 = a ;
		num2 = b ;
		switch (Bit)
	  {
		case 1:
			Swap_GTemp();
			printf("\nthe frist num befor swap = %d the second num befor swaping = %d\n",a,b);
			printf("the frist num after swap = %d the second num after swaping = %d\n",num1,num2);
            			
			break;
			
		case 2:
			Swap_GEqua();
			printf("\nthe frist num befor swap = %d the second num befor swaping = %d\n",a,b);
			printf("the frist num after swap = %d the second num after swaping = %d\n",num1,num2);		
			break;
			
		case 3:
			Swap_GXOR();
			printf("\nthe frist num befor swap = %d the second num befor swaping = %d\n",a,b);
			printf("the frist num after swap = %d the second num after swaping = %d\n",num1,num2);		
			break;
		
		default: printf("Non Available Choise");
	}
		
		break;
		
	case 2:
		printf("\n***** Welcome to swap System by : calling by pointer *****\n");
		
		printf("Please enter the first  number : ");  scanf("%d",&a);
		printf("Please enter the second number : ");  scanf("%d",&b);
		
		printf("\nthe frist num befor swap = %d the second num befor swaping = %d\n",a,b);
		Swap_pointer(&a,&b);
		printf("the frist num after swap = %d the second num after swaping = %d\n",a,b);		
		break;
		
			
		default: printf("Non Available Choise");
}
	
	printf("\n\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );

}


// swap by : global Temp variable
void Swap_GTemp (void)
{
	int temp ; 
	temp = num1 ;
	num1 = num2 ;
	num2 = temp ;
}

// swap by : global Equation variable
void Swap_GEqua (void)
{
	num1 = num1 + num2 ;
	num2 = num1 - num2 ;
	num1 = num1 - num2 ;
}

// swap by : global XOR variable
void Swap_GXOR (void)
{
	int Xr ;
	Xr   = num1 ^ num2 ;
	num1 = num1 ^ Xr   ;
	num2 = num2 ^ Xr   ;
}

// swap by : call by refrance 
/*void Swap_refrance (int &n1 ,int &n2 )
{
	int temp ; 
	temp = n1 ;
	n1   = n2 ;
	n2   = temp ;
}
*/
// swap by : call by pointer 
void Swap_pointer( int *n1 , int *n2 )
{
	int temp ; 
	temp = *n1 ;
	*n1  = *n2 ;
	*n2  = temp ;
}