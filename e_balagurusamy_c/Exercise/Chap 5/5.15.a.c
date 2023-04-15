/*
 * Write a program to read a double-type value x that represents angle in readians and a characters-type variable
 * T that represents the type of trigonometric funciton and display the value of
 *
 * a. sin(x), if s or S assigned to T,
 * b. cos(x), if c or C is assigned to T, and
 * c. tan(x), if t ot T is assigned to T.
 *
 * using i. if...else statement and ii. switch statement.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	double num;
	char T;
	printf("Choices");
	printf("\n\n1. sin(x) : Type s or S.");
	printf("\n\n2. cos(x) : Type c or C.");
	printf("\n\n3. tan(x) : Type t or T.");
	printf("\n\nEnter your choice: ");
	scanf("%c",&T);
	printf("\nEnter angle in radian: ");
	scanf("%lf",&num);
	if(T=='s' || T=='S') {
		printf("sin(%.2lf) = %lf",num,sin(num));
	}
	else if(T=='c' || T=='C') {
		printf("cos(%.2lf) = %lf",num,cos(num));
	}
	else if(T=='t' || T=='T') {
		printf("tan(%.2lf) = %lf",num,tan(num));
	}
	else {
		printf("\nWrong input!");
		printf("\nProgram will terminate.");
	}
	return(0);
}
