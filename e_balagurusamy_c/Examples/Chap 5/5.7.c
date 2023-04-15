/*
An employee can apply for a loan at the beginning ofevery size months, but he will be sanctioned the amount
according the the following company rules:

Rule 1: An employee cannot enjoy more than two loans at any point of time.
Rule 2: Maximum permissible total loan is limited and depends upon the category of the employee.

*/
#include<stdio.h>
#define MAXLOAN 50000

int main(int argc,char ** argv) {
	//Your code here.
	long int loan1,loan2,loan3,sancloan,sum23;
	printf("Enter the values of previous two loans: ");
	scanf("%ld %ld",&loan1,&loan2);
	printf("\nEnter the value of new loan: ");
	scanf("%ld",&loan3);
	sum23=loan2+loan3;
	sancloan=(loan1>0) ? 0 : ((sum23>MAXLOAN) ? MAXLOAN-loan2 : loan3);
	printf("\n\n");
	printf("Previous loans pending:\n%ld %ld\n",loan1,loan2);
	printf("Loan requested=%ld\n",loan3);
	printf("Loan sanctioned=%ld\n",sancloan);
	return(0);
}
