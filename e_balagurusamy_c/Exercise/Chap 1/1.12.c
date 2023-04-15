//Program to find perimeter and area of circle with centre (0,0) and point (4,5).
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(int argc,char ** argv) {
	//Your code here.
	float R;
	float A,C;
	R=sqrt(((4-0)*(4-0))+((5-0)*(5-0)));
	A=PI*R*R;
	C=2*PI*R;
	printf("\nThe circumference is %f, and area is %f.",C,A);
	return(0);
}
