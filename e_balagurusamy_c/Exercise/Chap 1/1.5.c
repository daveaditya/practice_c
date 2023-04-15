//Program to find area of circle, use symbolics constants and assume radius value.
#include<stdio.h>
#define PI 3.14

int main(int argc,char ** argv) {
	//Your code here.
	float radius=10.0,area;
	area=PI*radius*radius;
	printf("\nThe radius of circle with %f radius is %f.",radius,area);
	return(0);
}
