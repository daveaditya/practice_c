//Program to print nth Fibonacci Number.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num1=0,num2=0,n,i,fib;
	printf("\n\nEnter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++) {
		fib=num1+num2;
		num1=num2;
		num2=fib;
	}
	printf("\nnth fibonacci number (for n=%d) = %d",n,fib);
	return(0);
}
