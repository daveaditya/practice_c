//Program to enter a number and print the sum of its digits.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int no,sum=0;
	printf("\nEnter a number: ");
	scanf("%d",&no);
	while(no>0) {
		sum=sum+(no%10);
		no=no/10;
	}
	printf("\nThe sum of the digits is %d",sum);
	return(0);
}
