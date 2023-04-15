/*
 * Write a program to compute and display the sum of all integers that are divisible by 6 but not
 * divisible by 4 and lie between 0 and 100. The program should also count and display the number
 * of such values.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int count=0,sum=0;
	for(int i=0;i<=100;i++) {
		if((i%6==0) && (i%4!=0)) {
			sum=sum+i;
			count++;
		}
	}
	printf("\nThe sum is %d and count is %d.",sum,count);
	return(0);
}
