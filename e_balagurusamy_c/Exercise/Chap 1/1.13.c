//Program to find area of circle with line at (2,2) and (5,6) and is the diameter of the circle.
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(int argc,char ** argv) {
	//Your code here.
	float A,D;
	D=sqrt(((5-2)*(5-2))+((6-2)*(6-2)));
	A=PI*(D/2)*(D/2);
	printf("\nThe area of the circle with radius %f is %f.",(D/2),A);
	return(0);
}
