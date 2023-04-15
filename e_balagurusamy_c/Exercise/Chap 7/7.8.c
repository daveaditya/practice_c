/*
 * Write a program that fills a five-by-five matrix as follows:
 * 1. Upper left triangle with +1s
 * 2. Lower right triangle with -1s
 * 3. Right to left diagonal with zeros.
 * Display the contents of the matrix using not more than two printf statements.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int A[5][5];
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			if(i==j) {
				A[i][j]=0;
			}
			else if(j>i) {
				A[i][j]=1;
			}
			else {
				A[i][j]=-1;
			}
		}
	}
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
	return(0);
}
