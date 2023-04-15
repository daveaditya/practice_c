/*
 * Write a nprogram to print a square of size 5 by using the character S as shown below:
 * a. S S S S S			B. S S S S S
 *    S S S S S			   S       S
 *    S S S S S			   S       S
 *    S S S S S			   S       S
 *    S S S S S			   S S S S S
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	char ch='S';
	int lines;
	printf("Enter the number of lines: ");
	scanf("%d",&lines);
	for(int i=1;i<=lines;i++) {
		for(int j=1;j<=lines;j++) {
			printf("%c ",ch);
		}
		printf("\n");
	}
	return(0);
}
