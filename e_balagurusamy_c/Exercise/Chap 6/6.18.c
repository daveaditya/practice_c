/*
 * Write a program to print all integers that are not divisible by either 2 or 3
 * and lie between 1 and 100.
 * Program should also account the number of such integers and print the result.
 */

#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("The numbers not divisible by either 2 or 3 and lie between 1 and 100.\n");
	for(int i=1;i<=100;i++) {
		if(i%2!=0 || i%3!=0) {
			printf("%d\t",i);
		}
	}
	return(0);
}
