#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20] ;
	int id ;
	float gpa ;
	int number ;
	
}iti_student;



void main(void)
{
	int n1,n2 ;
	
	iti_student x ;
	iti_student *ptr ; //oriti_student *ptr = &x;
	ptr = &x ;
	
	ptr->id = 50 ;
	//*(ptr.gpa) = 3.9 ;
	(*ptr).gpa = 3.9 ;
	(*ptr).number = 1999;
	
	printf("Please enter name1 : ");  scanf("%s",(*ptr).name); // scanf("%s",&(ptr->name));;
	

	printf("yoru name1 is  : %s \n",ptr->name); 
	printf("yoru name2 is  : %s \n",x.name);
	
	printf("yor id = %d , your gpa = %f, your num =%d\n",ptr->id,(*ptr).gpa,(*ptr).number);
	printf("yor id = %d , your gpa = %f, your num =%d\n",x.id,x.gpa,x.number);
}
