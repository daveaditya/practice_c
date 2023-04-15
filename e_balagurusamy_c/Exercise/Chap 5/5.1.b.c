//Write a rpogram to determine whether a given number is 'odd' or 'even' and print the message
//NUMBER IS EVEN
//or
//NUMBER IS ODD
//a. without using else option, b. with else option.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%2==0) {
		printf("\nNUMBER IS EVEN");
	}
	else {
		printf("\nNUMBER IS ODD");
	}
	return(0);
}
