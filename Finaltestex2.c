#include<stdio.h>
#include<stdint.h>

void main()
{
	int16_t value = 0xabcd; 
	int8_t Low = 0; 
	int8_t High = 0;
		
	int8_t* plow = &value; 
	uint8_t* phigh = plow + 1; 
	Low = *plow; 
	High = *phigh; 
	printf("high: 0x%hhx, low: 0x%hhx", High, Low); 

}