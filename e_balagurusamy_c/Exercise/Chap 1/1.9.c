//Program to convert from fahrenheit to celsius and celsius to fahrenheit.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float F,C;
	printf("\nEnter the temperature in Fahrenheit : ");
	scanf("%f",&F);
	C=(5*(F-32))/9;
	printf("\nThe temperature in Celsius is : %f",C);
	printf("\nEnter the temperature in Celsius : ");
	scanf("%f",&C);
	F=((9/5)*C)+32;
	printf("\nThe temperature in Fahrenheit is : %f",F);
	return(0);
}
