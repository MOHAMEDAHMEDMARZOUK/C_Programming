#include <stdio.h>

int x = 10;
int y = 20;

// swap by : global variable
void Swap (void);

// swap by : static variable 
//void swap_2num (int num1 ,int num2 );

// swap by : call by pointer 
//void swap_num( int *x , int *y);

// swap by : call by refrance 
//void swap_2num (int &num1 ,int &num2 );

void main(void)
{
	printf("X before swap = %d\n",x);
	printf("Y before swap = %d\n\n\n",y);
	
	Swap();
	
	printf("X after swap = %d\n",x);
	printf("Y after swap = %d\n",y);
}


void Swap (void)
{
	int z = x;
	x = y;
	y = z;
}

// swap by : static variable
/*
void swap_2num (int num1 ,int num2 )
{
    int temp ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
} */

// swap by : call by pointer 
/*
void swap_num( int *x , int *y)
{
    int teamp ;
    teamp = *x ;
    *x = *y ;
    *y = teamp ;
} */


// swap by : call by refrance
/*
void swap_2num (int &num1 ,int &num2 )
{
    int temp ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
} */
