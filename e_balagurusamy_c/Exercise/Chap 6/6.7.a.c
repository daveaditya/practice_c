/*
 * Write programs to print the following outputs using for loops.
 * a. 1
 * 	  2 2
 * 	  3 3 3
 * 	  4 4 4 4
 * 	  5 5 5 5 5
 *
 * b. * * * * *
 *      * * * *
 *        * * *
 *          * *
 *            *
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int lines;
	printf("\nEnter the number of lines to be printed: ");
	scanf("%d",&lines);
	printf("\n");
	for(int i=1;i<=lines;i++) {
		for(int j=1;j<=i;j++) {
			printf("%3d",i);
		}
		printf("\n");
	}
	return(0);
}
