/*
 * Write a program to compute the value of Euler's number e, that is used as the base of natural logarithms.
 * Use the formula.
 * e= 1 + 1/1! + 1/2! + ... + 1/n!
 * Use suitable loop construct. The loop must terminate when the difference between two successive
 * values of e is less than 0.00001.
*/
#include<stdio.h>
#include<math.h>
#define ACCURACY 0.00001

int main(int argc,char ** argv) {
	//Your code here.
	double prev,e=1,term;
	int count=1,factorial=1;
	while(1) {
		prev=e;
		for(int i=count;i>0;i--) {
			factorial=factorial*i;
		}
		term=1/(double)factorial;
		e=e+term;
		factorial=1;
		count++;
		if((fabs(e-prev))<ACCURACY) {
			break;
		}
	}
	printf("\nThe value of e is %lf.",e);
	return(0);
}
