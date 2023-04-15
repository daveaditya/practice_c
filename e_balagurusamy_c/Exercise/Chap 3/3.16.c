//The cost of one type of mobile serive is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls. Write a program to read customers codes and calls made and print teh bill for each customer.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int code,noOfCalls;
	float bill=250.0;
	printf("\nEnter the customer code: ");
	scanf("%d",&code);
	printf("\nEnter the number of calls made: ");
	scanf("%d",&noOfCalls);
	if(noOfCalls>100) {
		bill=bill+(noOfCalls-100)*1.25;
	}
	printf("\nThe billing amount is %.2f.",bill);
	return(0);
}
