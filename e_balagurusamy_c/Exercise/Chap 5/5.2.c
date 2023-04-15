//Write a program to find the number of and sum of all integers greater than 100 and less than 200
//that are divisible by 7.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int sum=0,count=0;
	for(int i=100;i<200;i++) {
		if(i>100 && i<200 && i%7==0) {
			count++;
			sum=sum+i;
		}
	}
	printf("Sum: %d, and Count: %d.",sum,count);
	return(0);
}
