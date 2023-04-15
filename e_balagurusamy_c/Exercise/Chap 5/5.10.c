/*
 * Write a program to compute the real roots of a quadratic equation
 * 				ax^2 + bx + c = 0
 * The roots are given by the equations
 * 			x1=(-b) + ((sqrt((b*b)-(4*a*c)))/(2*a))
 * 			x1=(-b) - ((sqrt((b*b)-(4*a*c)))/(2*a))
 *
 * The program should request for the values of the cpnstants a,b,
 * and c and print the values of x1 and x2. Use the following rules:
 *
 * a. No, solution if both a and b are zero.
 * b. There is only one root if a=0 (x=-c/b).
 * c. There are no real roots, if b^2-4ac is negative
 * d. Otherwise, there are two real roots
 *
 * Test your program with appropriate data so that all logical paths are working as per your design.
 * Incorporate appropriate output messages.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	float a,b,c;
	float des,x,x1,x2;
	printf("Enter the values of three constants (a,b,c) : ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0 && b==0) {
		printf("\nNo solution exists.");
	}
	else if(a==0) {
		x=-(c/b);
		printf("\nThe roots are : %.2f",x);
	}
	else if(((b*b)-(4*a*c))<0) {
		printf("\nNo real solution exists.");
	}
	else {
		des=sqrt((b*b)-(4*a*c));
		x1=(-b)+(des/(2*a));
		x2=(-b)-(des/(2*a));
		printf("\nThe roots are x1= %.2f and x2 = %.2f.",x1,x2);
	}
	return(0);
}
