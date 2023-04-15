/*
 * Define a macro with one parameter to compute the volume of a sphere.
 * Write a program using this macro to compute the volume for spheres of
 * radius 5, 10 and 15 metres.
 */
#include<stdio.h>

#define SPHERE(x) (x*x*x)

int main(int argc,char ** argv) {
	//Your code here.
	printf("The volume of sphere with radius 5 is %d.",SPHERE(5));
	printf("\nThe volume of sphere with radius 10 is %d.",SPHERE(10));
	printf("\nThe volume of sphere with radius 15 is %d.",SPHERE(15));
	return(0);
}
