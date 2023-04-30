#include<stdio.h>

int add (int x , int y );
int sub (int x , int y );
int mul (int x , int y );
int div (int x , int y );
int And (int x , int y );
int Or (int x , int y );
int Not (int x );
int Xor (int x , int y );
int Rem (int x , int y );
int inc (int x );
int dec (int x );
void main (void)
{
	int id,x,y;
	printf(">>>>>>>>Welcome to simple Calculator\n");
	printf(" 1-Add\n 2-Subtract\n 3-Multiply \n 4-Divide\n 5-And\n 6-Or\n 7-Not\n 8-Xor\n 9-reminder\n 10-Increment\n 11-Decrement\n");
	printf("Enter The Number of the operation : ");
	scanf("%d",&id);
	switch (id)
	{
		case 1:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",add(x ,y ));
			break;
		case 2:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",sub(x ,y ));
			break;
		case 3:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",mul(x ,y ));
			break;
		case 4:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",div(x ,y ));
			break;
		case 5:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",And(x ,y ));
			break;
		case 6:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",Or(x ,y ));
			break;
		case 7:
			printf("Please enter the number : ");
			scanf("%d",&x);
			printf("The Result is : %d",Not(x));
			break;
		case 8:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",Xor(x ,y ));
			break;
		case 9:
			printf("Please enter the first number : ");
			scanf("%d",&x);
			printf("Please enter the second number : ");
			scanf("%d",&y);
			printf("The Result is : %d",Rem(x ,y ));
			break;
		case 10:
			printf("Please enter the number : ");
			scanf("%d",&x);
			printf("The Result is : %d",inc(x));
			break;
		case 11:
			printf("Please enter the number : ");
			scanf("%d",&x);
			printf("The Result is : %d",dec(x));
			break;
		default: printf("Non Available Choise");
	}
}

int add (int x , int y )
{
	return (x+y) ;
}

int sub (int x , int y )
{
	return (x-y) ;
}

int mul (int x , int y )
{
	return (x*y) ;
}

int div (int x , int y )
{
	return (x/y) ;
}

int And (int x , int y )
{
	return (x&y) ;
}
int Or (int x , int y )
{
	return (x|y) ;
}
int Not (int x )
{
	return (~x) ;
}
int Xor (int x , int y )
{
	return (x^y) ;
}
int Rem (int x , int y )
{
	return (x%y) ;
}
int inc (int x )
{
	return (++x) ;
}
int dec (int x )
{
	return (--x) ;
}
