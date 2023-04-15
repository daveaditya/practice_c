//Program to enter float number and print the rightmost digit of the integral part of the number
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float no;
	int n,last;
	printf("\nEnter a float number: ");
	scanf("%f",&no);
	n=no;
	last=n%10;
	printf("\nThe last digit of the integral part is %d.",last);
	return(0);
}
