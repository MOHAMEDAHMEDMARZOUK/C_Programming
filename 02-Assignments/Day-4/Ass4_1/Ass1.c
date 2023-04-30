#include <stdio.h>

int Max (int a ,int b , int c , int d);
int min (int a ,int b , int c , int d);

void main ()
{
	int a,b,c,d;
	printf("pleas enter the 4 values : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("The Maximum Number is :%d\n",Max(a,b,c,d));
	printf("The minimum Number is :%d\n",min(a,b,c,d));
}

 int Max (int a ,int b , int c , int d)
 {
     if(a>=b && a>=c && a>=d) return (a) ;
     if(b>=a && b>=c && b>=d) return (b) ;
     if(c>=a && c>=b && c>=d) return (c) ;
     if(d>=a && d>=b && d>=c) return (d) ;
 }

 int min (int a ,int b , int c , int d)
 {
     if(a<=b && a<=c && a<=d) return (a) ;
     if(b<=a && b<=c && b<=d) return (b) ;
     if(c<=a && c<=b && c<=d) return (c) ;
     if(d<=a && d<=b && d<=c) return (d) ;
 }
