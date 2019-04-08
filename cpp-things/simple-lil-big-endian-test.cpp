#include <iostream>

int main(){
	uint16_t test = 0x1234;
	uint8_t *ptr;
	//Genero test de little o big endian
	printf("Test little o big endian\r\nImprimiendo 0x1234: ");
	ptr= (uint8_t *) &test;
	printf("MSB 0x%02X ", *ptr);
	ptr++;
	printf("LSB 0x%02X\r\n", *ptr);
	char * a = (char *) &test;
	printf("a[0]: %X \n", a[0]);
	printf("a[1]: %X \n", a[1]);

	return 0;
}
