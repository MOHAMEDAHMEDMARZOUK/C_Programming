#include <stdio.h>

void main(void)
{
	int ID , Password , iterator = 0;
	int Ahmed_ID = 1234 ;          int Ahmed_pass = 7788 ;
	int Amr_ID   = 5678 ;          int Amr_pass   = 5566 ;
	int Wael_ID  = 9870 ;          int Wael_pass  = 1122 ;
	int stauts ; 
	
do {
	
	printf("\nPlease Enter your ID: ");
	scanf("%d",&ID);
	
	if ( ID == Ahmed_ID || ID == Amr_ID || ID == Wael_ID )
	{
		while(iterator != 3 )
		{
			printf("Please Enter Password: ");
			scanf ("%d",&Password);
			if ( Password == Ahmed_pass || Password == Amr_pass || Password == Wael_pass )
			{
				switch(Password)
	                 {
		                case 7788 : printf("Welcome Ahmed");   break;
		                case 5566 : printf("Welcome Amr ") ;   break;   
		                case 1122 : printf("Welcome Wael") ;   break;		   
	                 }
				break;
			}
			
			else { printf("Try again!!\n"); iterator++; }   }
			
		if(iterator == 3 ){ printf("Incorrect password for 3 times, No more tries"); }	
	}
	
	else { printf("You are not registered !!"); }
	
	printf("\n\nEnter 1 To Exit : ");
	scanf("%d", &stauts);
	
}while( stauts != 1 );
	
}

