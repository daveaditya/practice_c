//Write a program that printys the value 10.45678 in exponential format with the following specifications:
//a. correct to two decimal places;
//b. correct to four decimal places;
//c. correct to eight decimal places.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a=10.45678;
	printf("a. correct to two decimal places.");
	printf("\n%.2e",a);
	printf("\nb. correct to four decimal places.");
	printf("\n%.4e",a);
	printf("\nc. correct to eight decimal places.");
	printf("\n%.8e",a);
	return(0);
}
