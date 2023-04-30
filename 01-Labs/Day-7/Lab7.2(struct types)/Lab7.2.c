#include <stdio.h>
#include <stdlib.h>

// struct without creat object on it 

struct student {
	char arr[20];
	int id ;
	float gpa ;
};

// struct with creat object on it 
struct employ {
	char arr[20];
	int age ;
	float salary ;
}em1 , em2 , em3 ;

// struct with typedef 
typedef struct {
	char arr[20];
	int num ;
	float rate ;
}player ;

void main(void)
{
	int id , age , num ;
	float gpa , salary , rate ;
	
	struct student s1;
	player p1 ;
	
	s1.arr[0] = 'm';
	s1.arr[1] = 'k';
	printf("yoru name is  : %s ",s1.arr);
	
	printf("Please enter id   : ") ; scanf("%d",&id );
	printf("Please enter age  : ");  scanf("%d",&age);
	printf("Please enter num  : ");  scanf("%d",&num);
	
	printf("Please enter gpa    : ") ; scanf("%f",&gpa   );
	printf("Please enter salary : ");  scanf("%f",&salary);
	printf("Please enter rate   : ");  scanf("%f",&rate  );
	
	printf("Please enter yoru name1 : ");  scanf("%s",s1.arr);
	printf("Please enter yoru name2 : ");  scanf("%s",em1.arr);
	printf("Please enter yoru name3 : ");  scanf("%s",p1.arr);
	
	s1.id = id ;      s1.gpa = gpa ;
    em1.age = age ;   em1.salary=salary;
    p1.num = num ;    p1.rate = rate ;	
	
	printf("yoru name is  : %s , yor id = %d  ,your gpa = %f\n \n",s1.arr,s1.id,s1.gpa);
	printf("yoru name is  : %s , yor id = %d  ,your gpa = %f\n \n",em1.arr,em1.age,em1.salary);
	printf("yoru name is  : %s , yor id = %d  ,your gpa = %f\n \n",p1.arr,p1.num,p1.rate);
	
}