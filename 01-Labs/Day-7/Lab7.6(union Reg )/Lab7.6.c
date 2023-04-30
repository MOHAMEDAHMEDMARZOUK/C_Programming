#include <stdio.h>
#include <stdlib.h>

#define size 2

typedef union {
struct {
	char B0 : 1 ;
	char B1 : 1 ;
	char B2	: 1 ;
	char B3 : 1 ;
	char B4 : 1 ;
	char B5 : 1 ;
	char B6 : 1 ;
	char B7 : 1 ;
	
}Reg_Bit;
	char Reg_Byte ;

}Register;



void main(void)
{
	Register ADC ;
	ADC.Reg_Byte = 255 ;    //SET REG 0b 1111 1111
	ADC.Reg_Bit.B2 = 1 ;    //SET Bit 0b **** *1**
	ADC.Reg_Bit.B0 = 0 ;  //clear Bit 0b **** ***0
	
	printf("%d  ",ADC.Reg_Byte  );
	printf("%d  ",ADC.Reg_Bit.B2);
	printf("%d  ",ADC.Reg_Bit.B0);
}
