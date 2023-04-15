/*
 * Shown below is a Floyd's triangle.
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * ...
 * 79 ... 91
 *
 * a. Write a program to print the triangle
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int n;
	printf("Enter the number of lines to be display: ");
	scanf("%d",&n);
	printf("\n\n");
	int count=1;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=i;j++) {
			printf("%4d",count);
			count++;
		}
		printf("\n");
	}
	return(0);
}
