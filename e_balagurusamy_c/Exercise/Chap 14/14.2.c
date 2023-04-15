/*
 * Write a nested macro that gives the minimum of three vales.
 */
#include<stdio.h>

#define MAX(a,b) ( a > b ? a : b )

int main(int argc,char ** argv) {
	//Your code here.
	int max = MAX(55,MAX(20,30));
	printf("MAx out of 55 , 20 and 30 is %d",max);
	return(0);
}
