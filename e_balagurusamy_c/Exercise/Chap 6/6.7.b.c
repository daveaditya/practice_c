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
	printf("\nEnter the number of lines: ");
	scanf("%d",&lines);
	printf("\n");
	for(int i=lines;i>0;i--) {
		for(int j=1;j<=i;j++) {
			if(j==1) {
				for(int k=lines;k>i;k--) {
					printf("  ");
				}
			}
			printf("* ");
		}
		printf("\n");
	}
	return(0);
}
