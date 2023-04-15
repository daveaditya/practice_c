//Write a program to print print the value 345.6789 in fixed-point format with the following specification:
//a. correct to two decimal places;
//b. correct to five decimal places; and
//c. correct to zero decimal places
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a=345.6789;
	printf("a. correct to two decimal places");
	printf("\n%.2f",a);
	printf("\nb. correct to five decimal places");
	printf("\n%.5f",a);
	printf("\nc. correct to zero decimal places");
	printf("\n%.0f",a);
	return(0);
}
