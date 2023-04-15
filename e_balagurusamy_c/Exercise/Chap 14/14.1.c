/*
 * Define a macro PRINT_VALUE that can be used to print two values of
 * arbitrary type.
 */
#include<stdio.h>

#define PRINT_VALUE(a,b) { 	  \
	printf("Value 1 : %d",a); \
	printf("\nValue 2 : %.3f",b); \
}

int main(int argc,char ** argv) {
	//Your code here.
	PRINT_VALUE(10,35.23);
	return(0);
}
