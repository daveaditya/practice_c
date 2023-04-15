//The numbers in the sequence
//1 1 2 3 5 8 13 21 ...
//are called Fibonacci numbers. Write a program using do...while loop to calculate and print the first m Fibonacci numbers.
//(Hint: After the first two numbers int he series, each number is the sum of hte two previous numbers.)
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num,count=2,a=1,b=1,c;
	printf("Enter the ending number: ");
	scanf("%d",&num);
	printf("\nThe fibonacci series is: ");
	printf("%3d%3d",a,b);
	do {
		c=a+b;
		printf("%3d",c);
		a=b;
		b=c;
		count++;
	} while(count<num);
	return(0);
}
