/*
 * Given a set of 10 two-digit integers containing both positive and negative values, write a program
 * using for loop to compute the sum of all positive values and print sum and the number of
 * values added. The program should use scanf to read the values and terminate when the sum
 * exceeds 999. Do not use goto statement.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int number, sum=0;
	for(int i=1;i<=10;i++) {
		printf("\nEnter %d number: ",i);
		scanf("%d",&number);
		if(number>=0) {
			sum=sum+number;
		}
		if(sum>999) {
			printf("Sum  is greater than 999. Terminating...");
		}
	}
	printf("\nThe sum is %d.",sum);
	return(0);
}
