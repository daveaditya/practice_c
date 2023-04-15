/*
 * Write a program to print a two-dimensional Square Root table to provide the square of any number from 0 to 9.9.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("Number\t\t0.0\t\t0.1\t\t0.2\t\t0.3\t\t0.4\t\t0.5\t\t0.6\t\t0.7\t\t0.8\t\t0.9\n");
	for(float i=0;i<10;i++) {
		printf("%f\t",i);
		for(float j=0;j<1.0;j=j+0.1) {
			printf("%f\t",sqrt(i+j));
		}
		printf("\n");
	}
	return(0);
}
