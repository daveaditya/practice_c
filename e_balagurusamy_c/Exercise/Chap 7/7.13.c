/*
 * Write a program to read a matrix of size mxn and print its transpose.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int A[10][10],row,column;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	printf("Enter number of columns : ");
	scanf("%d",&column);
	int B[column][row];
	printf("Enter elements of matrix : ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			scanf("%d",&A[i][j]);
			B[j][i]=A[i][j];
		}
	}
	printf("The transpose of A is : \n");
	for(int i=0;i<column;i++) {
		for(int j=0;j<row;j++) {
			printf("%3d",B[i][j]);
		}
		printf("\n");
	}
	return(0);
}
