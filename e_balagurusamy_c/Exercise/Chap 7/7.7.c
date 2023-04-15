/*
 * Two matrices that have the same number of rows and columns can be multiplied
 * to produce a third matrix.
 * Consider the following two matrices.
 *
 *    a11 a12 ... a1n		   b11 b12 ... b1n
 * A= a21 a22 ... a2n		B= b21 b22 ... b2n
 *    ...					   ...
 *    an1 an2 ... ann		   bn1 bn2 ... bnn
 *
 * The product of A and B is a hird matrix C of size nxn where each element
 * of C is given by the following equation.
 * 						Ciy=sum(aik,bkj)
 * Write a program that will read the values of elements A and B and produce the
 * product matrix C.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int A[10][10],B[10][10],C[10][10],row,column;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns : ");
	scanf("%d",&column);
	printf("Enter elements of A : ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter elements of B : ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			scanf("%d",&B[i][j]);
		}
	}
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			C[i][j]=0;
		}
	}
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			for(int k=0;k<row;k++) {
				C[i][j]=C[i][j] + (A[i][k]*B[k][j]);
			}
		}
	}
	printf("The multiplication is: \n");
	for(int i=0;i<row;i++) {
		for(int j=0;j<column;j++) {
			printf("%3d",C[i][j]);
		}
		printf("\n");
	}
	return(0);
}
