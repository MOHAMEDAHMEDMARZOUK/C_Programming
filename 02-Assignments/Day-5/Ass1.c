#include <stdio.h>
#include <stdlib.h>
int arr[10];


/* Scan the Array values loop */
int Scanning_Array (int size  );

/* Print the Array values loop */
int Print_Array (int size  );

/* Sort the Array values using Bubble sorting */
int Bubble_Sort (int size  );

/* Searching the Elemant of Array values is Exist or not */
void Linear_Searching (int size , int num_search );

/* Searching the Elemant of Array values is Exist or not */
void Binary_Searching (int size , int num_search );

void main(void)
{
	int size = 10 ;
	int num ;
	printf("Please Enter a number to count its existance: ");
	scanf("%d",&num);                      printf("\n\n");
	
	Scanning_Array (size);                 printf("\n\n");
	Linear_Searching(size , num );         printf("\n\n");
	Bubble_Sort(size);                     printf("\n\n");
	Print_Array(size);                     printf("\n\n");
	Binary_Searching(size , num );         printf("\n\n");
}	

int Scanning_Array (int size  )
{
	int i ;
	for (i = 0 ; i < (size) ; i++)
	{
		printf("Please Enter array element num %d : ",(i+1));
		scanf ("%d",&arr[i]);
	}
}

int Print_Array (int size  )
{
	int i ;
    /* Print the values after sorting */
	printf("Values after processing are:\n");
	for (i = 0 ; i < (size) ; i++)
	{
		printf("Array element num %d = %d \n",(i+1), arr[i]);
	}
}


int Bubble_Sort (int size  )
{
	int i , j ;
	int temp ;
	for (i = 0 ; i < (size-1) ; i++)
	{
		for (j = 0 ; j < (size-1)-i ; j++ )
		{
			if (arr[j] > arr[j+1] )
			{/* Swap */
				
				temp     = arr[j]   ; 
				arr[j]   = arr[j+1] ;
				arr[j+1] = temp     ;
			}
		}
	}
}

void Linear_Searching (int size , int num_search )
{
	int i,flag = 0;
	for (i = 0 ; i < size ; i++)
	{
		if (arr[i] == num_search )
		{
			int index = i ;
			printf("The number exist at index %d \n",index);
			flag++ ;
		}
	}
	if (flag == 0 ) { printf("!! The number is not exist \n");}
}

void Binary_Searching (int size , int num_search )
{
	int start = 0 ;
    int end = size -1 ;
    int mid ,index;
	int FoundFlag = 0;
	while(start <= end)
		{
			mid = (start + end) / 2 ; 
			if (arr[mid]== num_search)
			{
				index = mid ; 
				FoundFlag = 1 ;
				break ; 
			}
			else if (arr[mid]>num_search)
			{
				start = mid + 1 ; 
			}
			else if (arr[mid]<num_search)
			{
				end = mid - 1 ; 
			}
		}
		
		if (FoundFlag == 1) { printf("Your search is in index %d",index);}
		else                { printf("Your search Not Found!!");         }

}