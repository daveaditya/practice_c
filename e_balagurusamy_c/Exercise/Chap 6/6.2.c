//The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
//factorial m=m!=mx(m-1)x...1.
//Write a program that computes and prints a table of factorials for any given m.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,temp,fact=1;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0) {
		fact=fact*temp;
		temp--;
	}
	printf("\nThe factorial of %d is %d.",num,fact);
	return(0);
}
