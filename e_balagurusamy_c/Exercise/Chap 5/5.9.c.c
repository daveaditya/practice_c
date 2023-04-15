/*
 * Write a program that will read the value of x and evaluate the following fucniton:
 * 		1	for x>0
 * y=	0	for x=0
 * 		-1	for x<0
 *
 * 	using
 *
 * 	a. nested if statements
 * 	b. else if statements, and
 * 	c. conditional operator ? :
 *
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	float x;
	int result;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	(x>0) ? (result=1) : ( (x==0) ? (result=0) : (result=-1) );
	printf("\ny(%.2f) = %d",x,result);
	return(0);
}
