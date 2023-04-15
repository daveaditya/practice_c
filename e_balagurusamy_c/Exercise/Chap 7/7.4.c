/*
 * The folowing set of numbers is popularly knwon as Pascal's triangle.
 * 1
 * 1	1
 * 1	2	1
 * 1	3	3	1
 * 1	4	6	4	1
 * 1	5	10	10	5	1
 * .
 * .
 * .
 *
 * If we denote rows by i and columns by j, then any element (except the boundary elements)
 * in the triangle is given by
 * 			pij=pi-1,j-1 + pi-1,j
 *
 * Write a program to calculate the elements of the Pascal triangle for 10 rows
 * print the results.
 */
#include<stdio.h>

int main(int argc,char ** argv) {
	//Your code here.
	int triangle[10][10],size;
	printf("Enter the size of triangle: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++) {
		for(int j=0;j<=i;j++) {
			triangle[i][j]=1;
		}
	}
	for(int i=2;i<size;i++) {
		for(int j=1;j<i;j++) {
			triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
		}
	}
	printf("\nThe triangle is: \n");
	for(int i=0;i<size;i++) {
		for(int j=0;j<=i;j++) {
			printf("%d\t",triangle[i][j]);
		}
		printf("\n");
	}
	return(0);
}
