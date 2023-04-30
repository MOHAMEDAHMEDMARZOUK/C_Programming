#include <stdio.h>
#include <stdlib.h>

int Bubble_Sort (int arr[] , int size  );

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

int Bubble_Sort (int arr[] , int size )
{
	int i,j,z;
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
	
	return arr

}