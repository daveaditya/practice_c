//Write a program to compute the sum of the digits of a given integer number.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,temp,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0) {
		sum=sum+(temp%10);
		temp=temp/10;
	}
	printf("\nThe sum of digits of %d is %d.",num,sum);
	return(0);
}
