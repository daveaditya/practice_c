//Program to test 2D array in function.
#include<stdio.h>

void arr(int row,int col,int array[][col]);

int main(int argc,char ** argv) {
	//Your code here.
	int row,col;
	printf("Enter row and column size: ");
	scanf("%d %d",&row,&col);
	int array[row][col];
	arr(row,col,array);
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			printf("%5d",array[i][j]);
		}
	}
	return(0);
}

void arr(int row,int col,int array[][col]) {
	printf("Enter number: ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			scanf("%d",&array[i][j]);
		}
	}
}
