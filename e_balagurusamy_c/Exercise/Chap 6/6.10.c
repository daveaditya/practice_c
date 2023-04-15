/*
 * Write a program to print a table of values of the fucntion
 * y=exp(-x)
 * for x varying from 0.0 to 10.0 i steps of 0.10.
 */
#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("\nx\t0.1\t\t0.2\t\t0.3\t\t0.4\t\t0.5\t\t0.6\t\t0.7\t\t0.8\t\t0.9\n\n");
	for(float i=0.0;i<10.0;i++) {
		printf("%.2f",i);
		for(float j=0.1;j<1.0;j+=0.1) {
			printf("\t%f",exp(-(j+i)));
		}
		printf("\n");
	}
	return(0);
}
