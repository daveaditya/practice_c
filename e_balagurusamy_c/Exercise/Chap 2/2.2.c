//Program to print item price in paise from rupees.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float rs,paise;
	printf("\nEnter the amount in Rs. ");
	scanf("%f",&rs);
	paise=rs*100;
	printf("\nThe amount in paise is %f",paise);
	return(0);
}
