//Program to calculate x= a/ (b-c) using given value sof a, b, and c.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float x,a,b,c;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("\nEnter the value of b : ");
	scanf("%f",&b);
	printf("\nEnter the value of c : ");
	scanf("%f",&c);
	x=a/(b-c);
	printf("\nThe value of a/(b-c) is : %f",x);
	return(0);
}


//1. 250/(85-65) = 4.166667
//2. Divide by zero not allowed
