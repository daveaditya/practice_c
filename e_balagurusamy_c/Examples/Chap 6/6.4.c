//Program to print all the prime numbers between 1 and n, where 'n' is the value supplied by the user.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int prime(int num);
	int n,i;
	int temp;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Prime numbers between 1 and %d are:\n",n);
	for(i=2;i<=n;i++) {
		temp=prime(i);
		if(temp==-99) {
			continue;
		}
		else {
			printf("%d\t",i);
		}
	}
	return(0);
}

int prime(int num) {
	int j;
	for(j=2;j<num;j++) {
		if(num%j==0) {
			return(-99);
		}
		else;
	}
	if(j==num) {
		return(num);
	}
}
