//Program to print size of various datatypes.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("\nSize of character data type: %d",sizeof(char));
	printf("\nSize of unsigned character data type: %d",sizeof(unsigned char));
	printf("\nSize of signed character data type: %d",sizeof(signed char));
	printf("\nSize of integer data type: %d",sizeof(int));
	printf("\nSize of unsigned integer data type: %d",sizeof(unsigned int));
	printf("\nSize of signed integer data type: %d",sizeof(signed int));
	printf("\nSize of long integer data type: %d",sizeof(long int));
	printf("\nSize of long unsigned integer data type: %d",sizeof(long unsigned int));
	printf("\nSize of long unsigned integer data type: %d",sizeof(long signed int));
	printf("\nSize of short integer data type: %d",sizeof(short int));
	printf("\nSize of float data type: %d",sizeof(float));
	printf("\nSize of double data type: %d",sizeof(double));
	printf("\nSize of long double data type: %d",sizeof(long double));
	return(0);
}
