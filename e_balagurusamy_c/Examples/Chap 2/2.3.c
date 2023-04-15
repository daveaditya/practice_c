//Program that illustrates the use of scanf function.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int number;

	printf("Enter an integer number\n");
	scanf("%d",&number);

	if(number<100) {
		printf("Your number is smaller than 100\n\n");
	}
	else {
		printf("Your number contains more than two digits\n");
	}
	return(0);
}
