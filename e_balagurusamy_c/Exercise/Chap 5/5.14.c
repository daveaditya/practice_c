/*
 * Write and interactive program that could read a positive integer number and decide whether number
 * is a prime number and display the output accordingle.
 * Modify the program to count all the prime number that lie between 100 and 200.
 * NOTE : A prime number is a positive integer that is divisible only by 1 or by itself.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,FLAG=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	for(int i=2;i<num;i++) {
		if(num%i==0) {
			FLAG=1;
			break;
		}
	}
	if(FLAG==0) {
		printf("\nEntered number is prime.\n");
	}
	else {
		printf("\nEntered number is not prime.\n");
	}

	FLAG=0;
	int prime=0;

	for(int i=100;i<=200;i++) {
		prime=i;
		for(int j=2;j<i;j++) {
			if(prime%j==0) {
				FLAG=1;
				break;
			}
			else {
				FLAG=0;
			}
		}
		if(FLAG==0) {
			printf(" %5d ",prime);
			FLAG=0;
		}
	}

	return(0);
}
