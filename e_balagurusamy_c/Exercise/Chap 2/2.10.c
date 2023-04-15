//Program to demonstrate use of symbolic constant.
#include<stdio.h>
#define PI 3.14

int main(int argc,char ** argv) {
	//Your code here.
	float r,A;
	printf("\nEnter the of radius of circle : ");
	scanf("%f",&r);
	A=PI*r*r;
	printf("\nArea is %f",A);
	return(0);
}
