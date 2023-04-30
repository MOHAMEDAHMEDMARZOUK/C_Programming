#include <stdio.h>

void main(void)
{
	int ID ;
	int Password ;
	
	printf("Enter yoru ID : ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 70: printf("Enter yoru Password : ");  scanf("%d",&Password);
	             if (Password == 1907)  { printf ("** Welcome Mohamed ***"); }
		         else                   { printf (" Incorrect Password. ");  }
		         break;

		
		case 80: printf("Enter yoru Password : ");  scanf("%d",&Password);
		         if (Password == 1908)   { printf ("** Welcome Youssef ***");  }
		         else                    { printf (" Incorrect Password. ");   }
		         break;
		
		
		case 90: printf("Enter yoru Password : ");  scanf("%d",&Password);
		         if (Password == 1909)  { printf ("** Welcome Mina ***");   }
		         else                   { printf (" Incorrect Password. "); }
		         break;
	  
		default  : printf("Wrong Incorrect ID");        break;
	}
	
	
}