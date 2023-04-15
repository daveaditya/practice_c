//Program to print even numbers from 1 to 100.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	printf("\nEven numbers form 1 to 100 are :");
	for(int i=1;i<=100;i++) {
		if(i%2==0) {
			printf("%5d",i);
		}
	}
	return(0);
}
