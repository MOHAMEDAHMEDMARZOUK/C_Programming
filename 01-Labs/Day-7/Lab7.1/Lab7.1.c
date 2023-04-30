#include <stdio.h>
#include <stdlib.h>

struct Employee
{
	int salary ;
	int Bonus  ;
	int Deduction ;
};

void main(void)
{
	struct Employee Ahmed ;
	struct Employee Amr ;
	struct Employee mohamed ;
	int n1 ,n2 ,n3 ;
	int stauts = 0 ;
do {
	system("cls");
	int Total = 0 ;
	 
	printf("Please enter first number : ") ;  scanf("%d",&n1);
	printf("Please enter second number : ");  scanf("%d",&n2);
	printf("Please enter second number : ");  scanf("%d",&n3);
	
	Ahmed.salary = n1 ;
	Ahmed.Bonus = n2 ;
	Ahmed.Deduction = n3 ;
	
	printf("Please enter first number : ") ;  scanf("%d",&n1);
	printf("Please enter second number : ");  scanf("%d",&n2);
	printf("Please enter second number : ");  scanf("%d",&n3);
	
	Amr.salary = n1 ;
	Amr.Bonus = n2 ;
	Amr.Deduction = n3 ;
	
	printf("Please enter first number : ") ;  scanf("%d",&n1);
	printf("Please enter second number : ");  scanf("%d",&n2);
	printf("Please enter second number : ");  scanf("%d",&n3);
	
	mohamed.salary = n1 ;
	mohamed.Bonus = n2 ;
	mohamed.Deduction = n3 ;
	
	Total = (Ahmed.salary + Amr.salary + mohamed.salary + Ahmed.Bonus
	         + Amr.Bonus + mohamed.Bonus - Ahmed.Deduction - Amr.Deduction
			 - mohamed.Deduction);
			 
	 printf("Total Value Needed is %d",Total);
	
	
	printf("\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );
}
