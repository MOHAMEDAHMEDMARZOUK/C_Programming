#include <stdio.h>
#include <stdlib.h>

int max_num (int num1 ,int num2 );

void main(void)
{
	
	int a,b,max;
do {
	system("cls");
	printf("Please enter first number : ") ;  scanf("%d",&a);
	printf("Please enter second number : ");  scanf("%d",&b);
	
	max = max_num(a,b);
	printf("the max number is : %d",max);
	printf("\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );
}

int max_num (int num1 ,int num2 ){
	
	if ( num1 > num2 ) { return num1 ;}
	else               { return num2 ;}
	
	

}