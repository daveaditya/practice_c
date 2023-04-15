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
	switch(T) {
		case 'S':
		case 's':
			printf("\nsin(%lf) = %lf",num,sin(num));
			break;
		case 'C':
		case 'c':
			printf("\nsin(%lf) = %lf",num,sin(num));
			break;
		case 'T':
		case 't':
			printf("\nsin(%lf) = %lf",num,sin(num));
			break;
		default:
			printf("\nWrong input program will terminate.");
	}
}
