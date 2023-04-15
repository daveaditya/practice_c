//Program to dsplay whether number is odd or even.
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int no;
	printf("\nEnter a number: ");
	scanf("%d",&no);
	if(no%2==0) {
		printf("\n%d is even.",no);
	}
	else {
		printf("\n%d is odd.",no);
	}
	return(0);
}
