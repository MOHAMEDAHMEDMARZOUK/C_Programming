#include <stdio.h>
#include <stdlib.h>

#define size 2

typedef struct {
	char name[20] ;
	int id ;
	float gpa_math ;
	float gpa_english ;
	
}iti_student;



void main(void)
{
	iti_student arr[size] ;
	
	for (int i = 0 ; i < size ; i++)
	{
		printf("%d-Please enter name ",i+1);
		scanf("%s",arr[i].name );
		printf("%d-Please enter id ",i+1);
		scanf("%d",&arr[i].id );
		printf("%d-Please enter gpa_math ",i+1);
		scanf("%f",&arr[i].gpa_math );
		printf("%d-Please enter gpa_english ",i+1);
		scanf("%f",&arr[i].gpa_english );
		
		printf("\n\n");
	}
	
	printf("\n********************************\n ");
	for (int i = 0 ; i < size ; i++)
	{
		printf("%d-name is %s",i+1 ,arr[i].name );
		printf("%d-id  = %d ",i+1,arr[i].id);
		
		printf("%d-gpa_math = %f ",i+1 ,arr[i].gpa_math);
		printf("%d-gpa_english = %f ",i+1,arr[i].gpa_english);
		
		printf("\n\n ");
	}
}
