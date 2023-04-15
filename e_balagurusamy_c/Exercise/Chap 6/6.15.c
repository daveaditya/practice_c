/*
 * The present value (popularly known as book value) of an item is given by the relationship.
 * 				P=c(1-d)^n
 * where c=original cost
 * 		 d=rate of depreciation (per year)
 * 		 n=number of years
 * 		 p=present value after y years.
 *
 * If P is considered the scrap value at the end of useful life of the item, write a program to compute
 * the useful life in years given the original cost, depreciation rate, and the scrap value.
 *
 * The program should request the user to input the data interactively.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	int P,c,d,n;
	printf("Enter the value of c: ");
	scanf("%d",&c);
	printf("Enter the value of d: ");
	scanf("%d",&d);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	P=pow((c*(1-d)),n);
	printf("The value of P is %d.",P);
	return(0);
}
